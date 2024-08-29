/***************************************************
 * @file      inc.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-08-2024
 * @link      https://github.com/ZouariOmar/Crun
 * @copyright Copyright (c) 2024
 ***************************************************/

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

// Using the the stander C++ space
using namespace std;

// Custom libs
#include "../../pkg/color.h"

//? ----------------------- FUNCTIONS / CLASSES DECLARATION PART -----------------------

class Crun {
 private:
  // Prv vars declaration part
  string current_path;  // Current usr path
  string usr_prj;       // The usr project title
  unsigned usr;         // Usr choices
  bool loop;            // Crun program run/exit var

  // Prv function declaration part
  void menu(int);
  void projects();
  void clone_project(string, string);
  void setPrj(string);
  void get_prj_name();
  string built_sys();

 public:
  Crun();
  ~Crun();
  void body();
};  // Crun class

#endif  // __INC_HPP__