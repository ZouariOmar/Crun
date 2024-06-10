/***************************************************
 * @file      main.c
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
 * @brief the main Crun fn
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const **argv) {
  //* clear the bash
  ////system("clear");

  printf(
      "%s\t\t\t\t=================== Crun Project ===================\n"
      "\t\t\t\t================== By @ZouariOmar ==================\n"
      "\t\t\t\t==== Visit Us In: https://github.com/ZouariOmar ====%s\n\n",
      bleu, def);

  //* Set the installation path to the directory where the executable is located
  char installPath[PATH_MAX];

  //* get the current user path directory
  ssize_t len = readlink("/proc/self/exe", installPath, sizeof(installPath) - 1);
  if (len == -1) {
    perror("readlink");
    return 1;
  }
  installPath[len] = '\0';

  //* delete the last backslash
  char *lastSlash = strrchr(installPath, '/');
  if (lastSlash != NULL)
    *lastSlash = '\0';

  int loop = 1;

  while (loop) {
    int usr;

    printf(
        "\t\t%s---------------------------------------------------------------------------------------------------\n"
        "\t\t\t[1] Quick C Project Enviornment            [5] Quick C++ Project Enviornment      \n"
        "\t\t\t[2] C Project Enviornment (+Make)          [6] C++ Project Enviornment (+Make)    \n"
        "\t\t\t[3] C Project Enviornment (+Ninja)         [7] C++ Project Enviornment (+Ninja)   \n"
        "\t\t\t[4] C-SDL1.2 Project Enviornment (+make)   [8] C++-Qt Project Enviornment (+Ninja)\n"
        "\t\t\t                         [9] Web Project Enviornment \n"
        "\t\t\t                         [0] Exit                    \n"
        "\t\t%sType 'Crun --help' for more info\n%s"
        "\t\t---------------------------------------------------------------------------------------------------\n"
        "...%s",
        yellow, red, yellow, def);
    scanf("%d", &usr);

    switch (usr) {
    //? ------------------- C PROJECTS PART -------------------
    //* Clone the 'Quick C Project Enviornment'
    case 1:
      //* Create C/C++ project structure
      mkdir_c_cpp();

      //* Export/touch C/C++ project files
      touch_quick_c();

      //* Exit the loop
      loop = 0;
      break;

    //* Clone the 'C Project Enviornment (+Make)'
    case 2:
      // system("git clone https://github.com/ZouariOmar/Run_C_Project.git");
      //! Run_C_Project folder --> sh pkg/build.sh Make --> sh run.sh make

      //* Create C/C++ project structure
      mkdir_c_cpp();

      //* Download the necessary project files
      system("cd Run_C_Project/project/src && wget https://raw.githubusercontent.com/ZouariOmar/Run_Cpp_Project/main/project/src/main.cpp &&"
             "wget https://raw.githubusercontent.com/ZouariOmar/Run_Cpp_Project/main/project/src/lib.cpp");
      loop = 0;
      break;

    //* Clone the 'C Project Enviornment (+Ninja)'
    case 3:
      system("git clone https://github.com/ZouariOmar/Run_C_Project.git");
      //! Run_C_Project folder --> sh pkg/build.sh Ninja --> sh run.sh ninja
      loop = 0;
      break;

    //* Clone the 'C-SDL1.2 Project Enviornment (+make)'
    case 4:
      system("git clone https://github.com/ZouariOmar/Run_C_Project.git");
      //! Run_C_Project folder --> sh pkg/build.sh Make --> sh run.sh make
      loop = 0;
      break;

    //? ------------------- C++ PROJECTS PART -------------------
    //* Clone the 'Quick C++ Project Enviornment'
    case 5:
      system("git clone https://github.com/ZouariOmar/Run_Cpp_Project.git");
      loop = 0;
      break;

    //* Clone the 'C++ Project Enviornment (+Make)'
    case 6:
      system("git clone https://github.com/ZouariOmar/Run_Cpp_Project.git");
      loop = 0;
      break;

    //* Clone the C++ Project Enviornment (+Ninja)'
    case 7:
      system("git clone https://github.com/ZouariOmar/Run_Cpp_Project.git");
      loop = 0;
      break;

    //* Clone the 'C++-Qt Project Enviornment (+Ninja)'
    case 8:
      system("git clone https://github.com/ZouariOmar/Run_Cpp_Project.git");
      loop = 0;
      break;

    //? ------------------- WEB PROJECTS PART -------------------
    //* Clone the 'Web Project Enviornment'
    case 9:
      system("git clone https://github.com/ZouariOmar/Run_Web_Project.git");
      loop = 0;
      break;

    //* Quit Crun
    case 0:
      printf("\n\n\n%sSee You Next Time !%s\n\n\n", green, def);
      return 0;

    //* Invalid option
    default:
      printf("\n\n\n%sInvalid Option !%s\n\n\n\n", red, def);
      break;
    }
  }
  printf("\n\n\n");

  //* notify the user
  printf("%sInstallation Complete!%s\n", green, def);

  //* open the directory
  execl("/usr/bin/xdg-open", "xdg-open", installPath, (char *)NULL);

  return 0;
}
