// semissioncontrol/logger - (c) 2020 SEMC

// This module reads the /semc/logger directory
// for error and warning files. It then outputs them
// and alerts the user if a module has spit one out.

// Theory
// Each module gets its own directory at /semc/logger.
// This will be managed by semissioncontrol/core, right
// after the installation process of each module. Each
// module must spit out error files to /semc/logger/{module}.
// Furthermore, commands from the cli will always use 
// `2>` to output errors. 

// Written by: Bobbbay Bobbayan

#include <stdio.h>

/* Pseudocode:

var directories = []
for entry in directory {
  directories.push(entry)
}

loop {
  let error_files = []
  for i in directories {
    for entry in i {
      error_files.push(entry)
    }
  }
  printf(err_files)
  sleep()
}

*/
