/***************************************************
 * @file      lib.c
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

//? -------------------- INCLUDE PROTOTYPE DECLARATION PART --------------------
#include "../inc/inc.h"

//? ----------------------- FUNCTIONS PROTOTYPE DEV PART -----------------------

/**
 * @brief the main app fn
 * @param loop
 * @param usr
 */
void Crun(int *loop, int usr) {
  switch (usr) {
    //? ------------------- C PROJECTS PART -------------------
    //* Clone the 'Quick C Project Enviornment'
    case 1:
      clone_project("Quick_C_Project_Environment", (char *)NULL, loop);
      break;

    //* Clone the 'C Project Enviornment'
    case 2:
      clone_project("C_Project_Environment", built_sys(), loop);
      break;

    //* Clone the 'C-SDL1.2 Project Enviornment'
    case 3:
      clone_project("C-SDL1.2_Project_Environment", built_sys(), loop);
      break;

    //? ------------------- C++ PROJECTS PART -------------------
    //* Clone the 'Quick C++ Project Enviornment'
    case 4:
      clone_project("Quick_Cpp_Project_Environment", (char *)NULL, loop);
      break;

    //* Clone the 'C++ Project Enviornment'
    case 5:
      clone_project("Cpp_Project_Environment", built_sys(), loop);
      break;

    //* Clone the 'C++-Qt Project Enviornment'
    case 6:
      clone_project("Cpp-Qt_Project_Environment", built_sys(), loop);
      break;

    //? ------------------- WEB PROJECTS PART -------------------
    //* Clone the 'Web Project Enviornment'
    case 7:
      system("git clone https://github.com/ZouariOmar/Run_Web_Project");

      //* Exit the loop
      *loop = 0;

      break;

    //* Quit Crun
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
 * @brief All Crun menus
 * @param this
 */
void menu(int this) {
  switch (this) {
    //* Show the project intro bar
    case 0:
      system("echo \"\033[0;32m$(figlet -w $(tput cols) '                             Crun - V1.05')\033[0m\"");
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
      printf("Project Name...");
      break;

    //* Invalid input
    default:
      break;
  }
}

/**
 * @brief clone the project from github
 * @param project_name
 * @param build_sys
 * @param loop
 * @param flag
 */
void clone_project(char *project_name, char *build_sys, int *loop) {
  //* Take the project name
  char new_project_name[PATH_MAX];
  prj_name(new_project_name);

  //* Init the cmd char var
  char cmd[PATH_MAX];

  //* Clone the project
  sprintf(cmd, "git clone https://github.com/ZouariOmar/%s.git", project_name);
  system(cmd);

  //* Set the project name
  sprintf(cmd, "sudo mv %s '%s'", project_name, new_project_name);
  system(cmd);

  //* Set the project workspace name
  sprintf(cmd, "sudo mv '%s'/%s.code-workspace '%s'/'%s'.code-workspace", new_project_name, project_name, new_project_name, new_project_name);
  system(cmd);

  //* Del the unecessary files
  sprintf(cmd, "sudo rm -r '%s'/.git '%s'/README.md '%s'/LICENSE", new_project_name, new_project_name, new_project_name);
  system(cmd);

  //* Make run.sh exuded
  sprintf(cmd, "sudo chmod +x '%s'/run.sh", new_project_name);
  system(cmd);

  //* Add the build sys
  if (build_sys) {
    sprintf(cmd, "cmake -S '%s'/pkg -B '%s'/bin/build %s", new_project_name, new_project_name, build_sys);
    system(cmd);
  }

  //* Exit the loop
  *loop = 0;
}

/**
 * @brief take the build sys type
 * @return char*
 */
char *built_sys() {
  int usr_input;
  while (1) {
    menu(2);
    scanf("%d", &usr_input);

    switch (usr_input) {
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
 * @brief take the usr project name
 *
 * @param new_project_name
 */
void prj_name(char *new_project_name) {
  printf("%s\n\nProject Name...%s", yellow, def);

  //* Consume the newline char
  while (getc(stdin) != '\n');

  //* Take the usr input
  fgets(new_project_name, sizeof(new_project_name) * 200, stdin);

  //* Check if the last char is a newline
  if (new_project_name[strlen(new_project_name) - 1] == '\n')
    new_project_name[strlen(new_project_name) - 1] = '\0';
}