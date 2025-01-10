/**
 * @file lib.cpp
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @brief # Main dev file
 * @version 0.1
 * @date 2025-01-10
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Crun Crun @endlink
 */

//? -------------------- INCLUDE PROTOTYPE DECLARATION PART --------------------
#include "../inc/inc.hpp"
#include "../models/color.h"
#include "../models/patterns.hpp"

//? ----------------------- FUNCTIONS PROTOTYPE DEV PART -----------------------

/**
 * @brief ### Lancer function
 * 
 * @param argc int
 * @param argv {const char **}
 */
void __lance__(int argc, const char **argv) {
  if (argc == 1)
    Crun c;
  else if (argc == 3)
    Crun c(string{argv[1]} + string{argv[2]});
  else if (argc == 5)
    Crun c(string{argv[1]} + string{argv[2]}, string{argv[3]} + string{argv[4]});
}

/**
 * @brief ### Construct a new Crun::Crun object
 * 
 * @param f1 string
 * @param f2 string
 */
Crun::Crun(string f1, string f2)
    : current_path(filesystem::current_path()), loop(true), usr(-1) {
  // Clear the CLI
  system("clear");

  // Show the project intro bar
  menu(0);

  // Check the flag
  if (is_flag(f1) && is_flag(f2))
    body();
  else
    printf("\n\n%sInvalid Option !%s\n\n", red, def);
}

/**
 * @brief ### Construct a new Crun::Crun object
 * 
 * @param f1 string
 */
Crun::Crun(string f1)
    : current_path(filesystem::current_path()), loop(true), usr(-1) {
  // Clear the CLI
  system("clear");

  // Show the project intro bar
  menu(0);

  // Check the flag
  if (is_flag(f1))
    body();
  else
    printf("\n\n%sInvalid Option !%s\n\n", red, def);
}

/**
 * @brief ### Construct a new Crun::Crun object
 */
Crun::Crun()
    : current_path(filesystem::current_path()), loop(true), usr(-1) {
  // Clear the CLI
  system("clear");

  // Show the project intro bar
  menu(0);

  body();
}

/**
 * @brief ### The main main Crun function
 */
void Crun::body() {
  while (loop) {
    if (usr == -1) {
      // Show the Crun menu
      menu(1);

      // Take the usr input option
      cin >> usr;
    }

    //* Run the program
    projects();
  }
}

/**
 * @brief ### Return if there is flag match
 * 
 * @param str string 
 * @return bool 
 */
bool Crun::is_flag(string str) {
  regex r("-P([1-9]+)|-N([A-Za-z]+)"); // Set the regex pattern
  smatch match;

  if (regex_search(str, match, r)) {
    if (match[1].matched)
      usr = stoi(match[1]);
    else if (match[2].matched)
      prj_title = match[2];
    return true;
  }

  return false;
}

/**
 * @brief #### Clone project using the Cpkg template URL
 * 
 * - #### For quick access
 */
void Crun::projects() {
  //* Exit the loop
  loop = false;

  switch (usr) {
  //? ------------------- C/C++ PROJECTS PART -------------------
  //* Clone the 'Quick_C-CPP_Project_Env'
  case 1:
    clone_project("Quick_C-CPP_Project_Env");
    break;

  //* Clone the 'C-CPP_Project_Env'
  case 2:
    clone_project("C-CPP_Project_Env");
    break;

  //* Clone the 'SDL-C-CPP_Project_Env'
  case 3:
    clone_project("SDL-C-CPP_Project_Env");
    break;

  //* Clone the 'Qt-C-Cpp_Project_Env'
  case 4:
    clone_project("Qt-C-Cpp_Project_Env");
    break;

  //* Clone the 'Arduino-C-Cpp_Project_Env'
  case 5:
    clone_project("Arduino-C-Cpp_Project_Env");
    break;

  //? ------------------- WEB PROJECTS PART -------------------
  //* Clone the 'Run_Web_Project'
  case 6:
    clone_project("Run_Web_Project");
    break;

  //* Clone the 'ReactJS Project Enviornment'
  case 7:
    clone_project("#");
    break;

  //? ----------------------- QUIT CRUN -----------------------
  case 0:
    EXIT_SUCCESS_MSG;
    exit(EXIT_SUCCESS); //* Exit the program
    break;

  //* Invalid option
  default:
    INVALID_OPTION_MSG;
    usr = -1;    // Reset the usr choice
    loop = true; // Rest in the loop (ask the usr again)
    break;
  }
}

/**
 * @brief #### Clone + Setup the usr Project without build sys
 * 
 * @param project_name stirng
 */
void Crun::clone_project(string project_name) {
  // Setup the project
  setPrj(project_name);

  // Installation is complete successfully
  notify();
}

/**
 * @brief ### Setup the usr Project
 * 
 * - Actions: Delete(rm) | Rename(mv) | clone | changePermission(chmod)
 * @param old_prj_name string
 */
void Crun::setPrj(string old_prj_name) {
  //* Get the project name
  get_prj_name();

  // Clone the project
  string cmd = _GET(old_prj_name);
  system(cmd.c_str());

  // Unzip the pkg
  cmd = _UNZIP(old_prj_name);
  system(cmd.c_str());

  // Del the zip (no need for it)
  cmd = _DEL_ZIP(old_prj_name);
  system(cmd.c_str());

  // Set the project name
  cmd = _SET_NAME(old_prj_name, prj_title);
  system(cmd.c_str());

  // Set the project workspace name
  cmd = _SET_WORKSPACE_FILE(old_prj_name, prj_title);
  system(cmd.c_str());
}

/**
 * @brief ### Get the usr project name
 */
void Crun::get_prj_name() {
  if (!prj_title.empty())
    return;
  menu(2);

  //* Take the usr input
  while (getchar() != '\n')
    ;
  getline(cin, prj_title);
}

/**
 * @brief ### Installation Complete successfully notification
 */
void Crun::notify() {
  //* Notify the user
  printf("%sInstallation Complete!%s\n", green, def);

  //* Open the directory
  system(("xdg-open \"" + current_path + "\"").c_str());

  //* Open the project with VSC
  system(("code '" + prj_title + "'/'" + prj_title + "'.code-workspace").c_str());
}

/**
 * @brief ### All Crun menus
 * @param x int
 */
void Crun::menu(int x) {
  switch (x) {
  //* Show the project intro bar
  case 0:
    CRUN;
    MENU0(bleu, def);
    break;

  //* Show the Crun menu
  case 1:
    MENU1(yellow, red, yellow, def);
    break;

  //* Show the project name msg
  case 2:
    MENU2(yellow, def);
    break;

  //* Invalid input
  default:
    break;
  }
}