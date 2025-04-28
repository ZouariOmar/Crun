/**
 * @file      Crun.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     Crun source file
 * @version   0.1
 * @date      2025-01-10
 * @copyright Copyright (c) 2025
 * @link https://github.com/ZouariOmar/Crun Crun @endlink
 */

//? Include prototype declaration part
#include "../include/Crun.hpp"
#include "../import/patterns.hpp"

//? Functions prototype dev part

/**
 * @brief Construct a new Crun::Crun object
 * @param argc {const int}
 * @param argv {const char **}
 */
Crun::Crun(const int argc, const char **argv)
    : current_path(std::filesystem::current_path()),
      loop(true),
      usr(-1),
      prj_title("") {
  if (!((argc == 1) ||
        (argc == 3 && is_flag(std::string{argv[1]} + std::string{argv[2]})) ||
        (argc == 5 && is_flag(std::string{argv[1]} + std::string{argv[2]}) && is_flag(std::string{argv[3]} + std::string{argv[4]})))) {
    INVALID_OPTION_MSG;
    return;
  }
  system("clear"); // Clear the cli
  CRUN;            // Show Crun Top header
  MENU0;           // Show Crun header menu
}

/**
 * @brief ### The main main Crun function
 */
int Crun::generate() {
  while (loop) {
    if (usr != -1)
      projects();
    MENU1;           // Show the Crun menu
    std::cin >> usr; // Take the usr input
  }
  return EXIT_SUCCESS;
}

/**
 * @brief ### Return if there is flag match
 *
 * @param str string
 * @return bool
 */
bool Crun::is_flag(std::string str) {
  std::regex r("-P([1-9]+)|-N([A-Za-z]+)"); // Set the regex pattern
  std::smatch match;

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
    usr = -1, loop = true; // Ask the usr again (reset proccess)
    break;
  }
}

/**
 * @brief #### Clone + Setup the usr Project without build sys
 *
 * @param project_name stirng
 */
void Crun::clone_project(std::string project_name) {
  // Setup the project
  setupProject(project_name);

  // Installation is complete successfully
  notify();
}

/**
 * @brief ### Setup the usr Project
 *
 * - Actions: Delete(rm) | Rename(mv) | clone | changePermission(chmod)
 * @param old_prj_name string
 */
void Crun::setupProject(std::string old_prj_name) {
  //* Get the project name
  get_prj_name();

  // Clone the project
  std::string cmd = _GET(old_prj_name);
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
}

/**
 * @fn     Crun::get_prj_name()
 * @brief  Get the usr project name
 * @return void
 */
void Crun::get_prj_name() {
  if (!prj_title.empty())
    return;
  MENU2;

  //* Take the usr input
  while (getchar() != '\n')
    ;
  getline(std::cin, prj_title);
}

/**
 * @fn     Crun::notify()
 * @brief  Installation complete successfully notification
 * @return void
 */
void Crun::notify() {
  //* Notify the user
  printf("%sInstallation Complete!%s\n", green, def);

  //* Open the project with NVIM/VIM
  system(("nvim '" + prj_title + "' || vim '" + prj_title + "'").c_str());
}
