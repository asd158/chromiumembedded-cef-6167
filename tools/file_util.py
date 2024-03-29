# Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
# reserved. Use of this source code is governed by a BSD-style license that
# can be found in the LICENSE file.

from __future__ import absolute_import
from glob import iglob
from io import open
import os
import fnmatch
import shutil
import sys
import time


def read_file(name, normalize=True):
  """ Read a file. """
  try:
    with open(name, 'r', encoding='utf-8') as f:
      # read the data
      data = f.read()
      if normalize:
        # normalize line endings
        data = data.replace("\r\n", "\n")
      return data
  except IOError as e:
    (errno, strerror) = e.args
    sys.stderr.write('Failed to read file ' + name + ': ' + strerror)
    raise


def write_file(name, data):
  """ Write a file. """
  try:
    with open(name, 'w', encoding='utf-8', newline='\n') as f:
      # write the data
      if sys.version_info.major == 2:
        f.write(data.decode('utf-8'))
      else:
        f.write(data)
  except IOError as e:
    (errno, strerror) = e.args
    sys.stderr.write('Failed to write file ' + name + ': ' + strerror)
    raise


def path_exists(name):
  """ Returns true if the path currently exists. """
  return os.path.exists(name)


def write_file_if_changed(name, data):
  """ Write a file if the contents have changed. Returns True if the file was written. """
  if path_exists(name):
    old_contents = read_file(name)
  else:
    old_contents = ''

  if (data != old_contents):
    write_file(name, data)
    return True
  return False


def backup_file(name):
  """ Rename the file to a name that includes the current time stamp. """
  move_file(name, name + '.' + time.strftime('%Y-%m-%d-%H-%M-%S'))


def copy_file(src, dst, quiet=True):
  """ Copy a file. """
  try:
    shutil.copy2(src, dst)
    if not quiet:
      sys.stdout.write('Transferring ' + src + ' file.\n')
  except IOError as e:
    (errno, strerror) = e.args
    sys.stderr.write('Failed to copy file from ' + src + ' to ' + dst + ': ' +
                     strerror)
    raise


def move_file(src, dst, quiet=True):
  """ Move a file. """
  try:
    shutil.move(src, dst)
    if not quiet:
      sys.stdout.write('Moving ' + src + ' file.\n')
  except IOError as e:
    (errno, strerror) = e.args
    sys.stderr.write('Failed to move file from ' + src + ' to ' + dst + ': ' +
                     strerror)
    raise


def copy_files(src_glob, dst_folder, quiet=True):
  """ Copy multiple files. """
  for fname in iglob(src_glob):
    dst = os.path.join(dst_folder, os.path.basename(fname))
    if os.path.isdir(fname):
      copy_dir(fname, dst, quiet)
    else:
      copy_file(fname, dst, quiet)


def remove_file(name, quiet=True):
  """ Remove the specified file. """
  try:
    if path_exists(name):
      os.remove(name)
      if not quiet:
        sys.stdout.write('Removing ' + name + ' file.\n')
  except IOError as e:
    (errno, strerror) = e.args
    sys.stderr.write('Failed to remove file ' + name + ': ' + strerror)
    raise


def copy_dir(src, dst, quiet=True):
  """ Copy a directory tree. """
  try:
    remove_dir(dst, quiet)
    shutil.copytree(src, dst)
    if not quiet:
      sys.stdout.write('Transferring ' + src + ' directory.\n')
  except IOError as e:
    (errno, strerror) = e.args
    sys.stderr.write('Failed to copy directory from ' + src + ' to ' + dst +
                     ': ' + strerror)
    raise


def remove_dir(name, quiet=True):
  """ Remove the specified directory. """
  try:
    if path_exists(name):
      shutil.rmtree(name)
      if not quiet:
        sys.stdout.write('Removing ' + name + ' directory.\n')
  except IOError as e:
    (errno, strerror) = e.args
    sys.stderr.write('Failed to remove directory ' + name + ': ' + strerror)
    raise


def make_dir(name, quiet=True):
  """ Create the specified directory. """
  try:
    if not path_exists(name):
      if not quiet:
        sys.stdout.write('Creating ' + name + ' directory.\n')
      os.makedirs(name)
  except IOError as e:
    (errno, strerror) = e.args
    sys.stderr.write('Failed to create directory ' + name + ': ' + strerror)
    raise


def get_files(search_glob):
  """ Returns all files matching |search_glob|. """
  recursive_glob = '**' + os.path.sep
  if recursive_glob in search_glob:
    if sys.version_info >= (3, 5):
      result = iglob(search_glob, recursive=True)
    else:
      # Polyfill for recursive glob pattern matching added in Python 3.5.
      result = get_files_recursive(*search_glob.split(recursive_glob))
  else:
    result = iglob(search_glob)

  # Sort the result for consistency across platforms.
  return sorted(result)


def get_files_recursive(directory, pattern):
  """ Returns all files in |directory| matching |pattern| recursively. """
  for root, dirs, files in os.walk(directory):
    for basename in files:
      if fnmatch.fnmatch(basename, pattern):
        filename = os.path.join(root, basename)
        yield filename


def read_version_file(file, args):
  """ Read and parse a version file (key=value pairs, one per line). """
  lines = read_file(file).split("\n")
  for line in lines:
    parts = line.split('=', 1)
    if len(parts) == 2:
      args[parts[0]] = parts[1]


def eval_file(src):
  """ Loads and evaluates the contents of the specified file. """
  return eval(read_file(src), {'__builtins__': None}, None)


def normalize_path(path):
  """ Normalizes the path separator to match the Unix standard. """
  if sys.platform == 'win32':
    return path.replace('\\', '/')
  return path
