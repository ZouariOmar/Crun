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
//* Include stander C++ header(s)
#include <iostream>
#include <regex>

//* Include custom header(s)
#include "../import/patterns.hpp"
#include "../include/Crun.hpp"

//? Functions prototype dev part

/**
 * @fn         Crun::Crun(const int, const char **)
 * @brief      Construct a new Crun::Crun object
 * @param argc {const int}
 * @param argv {const char **}
 */
Crun::Crun(const int argc, const char **argv)
    : loop(true),
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
 * @fn     Crun::generate()
 * @brief  The main Crun function
 * @return int
 */
int Crun::generate() {
  while (loop) {
    if (usr != -1)
      loop = false, projects();
    else {
      MENU1;           // Show the Crun menu
      std::cin >> usr; // Take the usr input
    }
  }
  return EXIT_SUCCESS;
}

/**
 * @fn        Crun::is_flag(std::string)
 * @brief     Return `ture` if there is flag match, otherwise return `false`
 * @param str string
 * @return    bool
 */
bool Crun::is_flag(std::string str) {
  std::regex r(CRUN_CLI_FLAGS_PATTERN);
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
 * @fn     Crun::projects()
 * @brief  Match `usr` with the availble projects
 * @return void
 */
void Crun::projects() {
  switch (usr) {
  //? ------------------- C PROJECTS PART -------------------
  case 1:
    setupProject("CXCodePracticeEnv", CX_FILE_MODE);
    break;

  case 2:
    setupProject("CXContestEnv");
    break;

  case 3:
    setupProject("QuickCXProjectEnv");
    break;

  case 4:
    setupProject("NormalCXProjectEnv");
    break;

  case 5:
    setupProject("SDLCXProjectEnv");
    break;

  case 6:
    setupProject("QtCXProjectEnv");
    break;

  case 7:
    setupProject("ArduinoCXProjectEnv");
    break;

    //? -------------------- CPP PROJECTS PART ------------------
  case 8:
    setupProject("CXXCodePracticeEnv", CXX_FILE_MODE);
    break;

  case 9:
    setupProject("CXXContestEnv");
    break;

  case 10:
    setupProject("QuickCXXProjectEnv");
    break;

  case 11:
    setupProject("NormalCXXProjectEnv");
    break;

  case 12:
    setupProject("SDLCXXProjectEnv");
    break;

  case 13:
    setupProject("QtCXXProjectEnv");
    break;

  case 14:
    setupProject("ArduinoCXXProjectEnv");
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
 * @brief ### Setup the usr Project
 *
 * - Actions: Delete(rm) | Rename(mv) | clone | changePermission(chmod)
 * @param old_prj_name string
 */
void Crun::setupProject(std::string old_prj_name, const CrunProjectsFlags flag) {
  //* Get the project name if `prj_title` is empty
  if (prj_title.empty())
    get_prj_name();

  std::string cmd = _GET(old_prj_name);
  system(cmd.c_str());

  cmd = _UNZIP(old_prj_name);
  system(cmd.c_str());

  cmd = _DEL_ZIP(old_prj_name);
  system(cmd.c_str());

  if (flag == CX_FILE_MODE) {
    prj_title = prj_title + ".c";
    (std::rename((old_prj_name + ".c").c_str(), prj_title.c_str()) != 0) ? std::cerr << "[ERROR] Error renaming file\n" : std::cout << "[INFO] File renamed successfully\n";
    return;
  }

  if (flag == CXX_FILE_MODE) {
    prj_title = prj_title + ".cpp";
    (std::rename((old_prj_name + ".cpp").c_str(), prj_title.c_str()) != 0) ? std::cerr << "[ERROR] Error renaming file\n" : std::cout << "[INFO] File renamed successfully\n";
    return;
  }

  cmd = _SET_NAME(old_prj_name, prj_title);
  system(cmd.c_str());
}

/**
 * @fn     Crun::get_prj_name()
 * @brief  Get the usr project name
 * @return void
 */
void Crun::get_prj_name() {
  MENU2;
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
