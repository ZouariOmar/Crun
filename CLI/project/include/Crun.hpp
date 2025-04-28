/**
 * @file      Crun.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     Crun header file
 * @version   0.1
 * @date      2025-04-28
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar Crun.hpp @endlink
 */

#ifndef __INC_HPP__
#define __INC_HPP__

//? Include prototype declaration part
//* Include stander C header(s)
#include <linux/limits.h>
#include <string.h>
#include <unistd.h>

//* Include stander C++ header(s)
#include <filesystem>
#include <iostream>
#include <regex>

//? Class prototype declaration part

void __lance__(int, const char **);

class Crun {
private:
  int usr;                  // Usr choices
  bool loop;                // Crun program run/exit var
  std::string current_path; // Current usr path
  std::string prj_title;    // The usr project title

  bool is_flag(std::string);
  void projects();
  void clone_project(std::string);
  void setupProject(std::string);
  void get_prj_name();
  void notify();
  // downloadPkg(char *);

public:
  Crun(const int, const char **);
  int generate(); // New
}; // Crun class

#endif // __INC_HPP__
