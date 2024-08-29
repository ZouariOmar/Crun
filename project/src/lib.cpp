/***************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      29-08-2024
 * @link      https://github.com/ZouariOmar/Crun
 * @copyright Copyright (c) 2024
 ***************************************************/

//? -------------------- INCLUDE PROTOTYPE DECLARATION PART --------------------
#include "../inc/inc.hpp"

//? ----------------------- FUNCTIONS PROTOTYPE DEV PART -----------------------

/**
 * @brief ### Construct a new Crun::Crun object
 */
Crun::Crun()
    : current_path(filesystem::current_path()), loop(true) {
  // Clear the CLI
  // system("clear");

  // Show the project intro bar
  menu(0);
}

/**
 * @brief #### The main main Crun function
 */
void Crun::body() {
  while (loop) {
    // Show the Crun menu
    menu(1);

    // Take the usr input option
    cin >> usr;

    //* Run the program
    projects();
  }
}

/**
 * @brief ### Destroy the Crun::Crun object
 */
Crun::~Crun() {
  //* Notify the user
  printf("%sInstallation Complete!%s\n", green, def);

  //* Open the directory
  system(("xdg-open " + current_path).c_str());
}

/**
 * @brief #### Clone the usr project
 */
void Crun::projects() {
  switch (usr) {
    //? ------------------- C PROJECTS PART -------------------
    //* Clone the 'Quick C Project Enviornment'
    case 1:
      clone_project("Quick_C_Project_Environment", "");
      break;

    //* Clone the 'C Project Enviornment'
    case 2:
      clone_project("C_Project_Environment", built_sys());
      break;

    //* Clone the 'C-SDL1.2 Project Enviornment'
    case 3:
      clone_project("C-SDL1.2_Project_Environment", built_sys());
      break;

    //? ------------------- C++ PROJECTS PART -------------------
    //* Clone the 'Quick C++ Project Enviornment'
    case 4:
      clone_project("Quick_Cpp_Project_Environment", "");
      break;

    //* Clone the 'C++ Project Enviornment'
    case 5:
      clone_project("Cpp_Project_Environment", built_sys());
      break;

    //* Clone the 'C++-Qt Project Enviornment'
    case 6:
      clone_project("Cpp-Qt_Project_Environment", built_sys());
      break;

    //? ------------------- WEB PROJECTS PART -------------------
    //* Clone the 'Web Project Enviornment'
    case 7:
      setPrj("Run_Web_Project");

      //* Exit the loop
      loop = false;

      break;

    //? ----------------------- QUIT CRUN -----------------------
    case 0:
      printf("\n\n%sSee You Next Time !%s\n\n", green, def);

      //* Exit the program
      exit(EXIT_SUCCESS);

      break;

    //* Invalid option
    default:
      printf("\n\n%sInvalid Option !%s\n\n", red, def);
      break;
  }
}

/**
 * @brief #### Clone + Setup the usr Project
 * @param project_name 
 * @param buildSys 
 */
void Crun::clone_project(string project_name, string buildSys) {
  // Setup the project
  setPrj(project_name);

  // Add the build sys if there is
  if (!buildSys.empty()) {
    string cmd = "cmake -S '" + usr_prj + "'/pkg -B '" + usr_prj + "'/bin/build " + buildSys;
    system(cmd.c_str());
  }

  //* Exit the loop
  loop = false;
}

/**
 * @brief #### Setup the usr Project
 * *
 * - Actions: Delete(rm) | Rename(mv) | clone | changePermission(chmod)
 * @param old_get_prj_name 
 */
void Crun::setPrj(string old_get_prj_name) {
  //* Take the project name
  get_prj_name();

  // Init the cmd char var
  string cmd = "git clone https://github.com/ZouariOmar/" + old_get_prj_name + ".git";

  //* Clone the project
  system(cmd.c_str());

  // Set the project name
  cmd = "sudo mv " + old_get_prj_name + " '" + usr_prj + "'";
  system(cmd.c_str());

  // Set the project workspace name
  cmd = "sudo mv '" + usr_prj + "'/" + old_get_prj_name +
        ".code-workspace '" + usr_prj + "/" +
        usr_prj + ".code-workspace'";
  system(cmd.c_str());

  // Make run.sh exuded
  cmd = "sudo chmod +x '" + usr_prj + "'/run.sh";
  system(cmd.c_str());

  // Del the unecessary files
  cmd = "sudo rm -r '" + usr_prj + "'/.git '" + usr_prj + "'/README.md '" + usr_prj + "'/LICENSE";
  system(cmd.c_str());
}

/**
 * @brief #### Take the usr project name
 * @param usr_prj
 */
void Crun::get_prj_name() {
  menu(3);

  //* Take the usr input
  cin >> usr_prj;
}

/**
 * @brief take the build sys type
 * @return char*
 */
string Crun::built_sys() {
  int usrIn;
  while (1) {
    menu(2);
    cin >> usrIn;
    switch (usrIn) {
      case 1:
        return "";

      case 2:
        return "-G Ninja";

      case 0:
        printf("\n\n%sSee You Next Time !%s\n\n", green, def);

        //* Exit the program
        exit(EXIT_SUCCESS);

      default:
        printf("\n\n%sInvalid Option !%s\n\n", red, def);
        break;
    }
  }
}

/**
 * @brief ### All Crun menus
 * @param x
 */
void Crun::menu(int x) {
  switch (x) {
    //* Show the project intro bar
    case 0:
      system("echo \"\033[0;32m$(figlet -w $(tput cols) '                             Crun - V1.0.5')\033[0m\"");
      printf(
          "%s\t\t\t\t=================== Crun Project ===================\n"
          "\t\t\t\t================== By @ZouariOmar ==================\n"
          "\t\t\t\t==== Visit Us In: https://github.com/ZouariOmar ====%s\n\n",
          bleu, def);
      break;

    //* Show the Crun menu
    case 1:
      printf(
          "\t\t%s---------------------------------------------------------------------------------------------------\n"
          "\t\t\t[1] Quick C Project Enviornment            [4] Quick C++ Project Enviornment\n"
          "\t\t\t[2] C Project Enviornment                  [5] C++ Project Enviornment      \n"
          "\t\t\t[3] C-SDL1.2 Project Enviornment           [6] C++-Qt Project Enviornment   \n"
          "\t\t\t                         [7] Web Project Enviornment  \n"
          "\t\t\t                         [0] Exit                     \n"
          "\t\t%sVisit https://github.com/ZouariOmar/Crun for more info\n%s"
          "\t\t---------------------------------------------------------------------------------------------------\n"
          "...%s",
          yellow, red, yellow, def);
      break;

    //* Show the build sys menu
    case 2:
      printf(
          "\n\n\t\t%s---------------------------------------------------------------------------------------------------\n"
          "\t\t%sChose your build system:%s\n"
          "\t\t\t\t\t\t[1] Make (default) \n"
          "\t\t\t\t\t\t[2] Ninja          \n"
          "\t\t\t\t\t\t[0] Exit           \n"
          "\t\t---------------------------------------------------------------------------------------------------\n"
          "...%s",
          yellow, red, yellow, def);
      break;

    //* Show the project name msg
    case 3:
      printf("%s\n\nProject Name...%s", yellow, def);
      break;

    //* Invalid input
    default:
      break;
  }
}