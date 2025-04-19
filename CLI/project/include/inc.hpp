/**
 * @file inc.hpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief # Main include file
 * @version 0.1
 * @date 2025-01-10
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Crun Crun @endlink
 */

#ifndef __INC_HPP__
#define __INC_HPP__

//? -------------------- INCLUDE PROTOTYPE DECLARATION PART --------------------
// Stander C libs
#include <linux/limits.h>
#include <string.h>
#include <unistd.h>

// Stander C++ libs
#include <filesystem>
#include <iostream>
#include <regex>

// Using the the stander C++ space
using namespace std;

//? ----------------------- FUNCTIONS / CLASSES DECLARATION PART -----------------------

void __lance__(int, const char **);

class Crun {
private:
  // Prv vars declaration part
  int usr;             // Usr choices
  bool loop;           // Crun program run/exit var
  string current_path; // Current usr path
  string prj_title;    // The usr project title

  // Prv function declaration part
  void menu(int);
  bool is_flag(string);
  void body();
  void projects();
  void clone_project(string);
  void setPrj(string);
  void get_prj_name();
  void notify();

public:
  Crun();
  Crun(string);
  Crun(string, string);

}; // Crun class

#endif // __INC_HPP__