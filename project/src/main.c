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
  // Clear the bash interface
  system("clear");

  // Show the project intro bar
  menu(0);

  // Set the installation path to the directory where the executable is located
  char installPath[PATH_MAX];

  //* Get the current user path directory
  ssize_t len = readlink("/proc/self/exe", installPath, sizeof(installPath) - 1);
  if (len == -1) {
    perror("readlink");
    return 1;
  }
  installPath[len] = '\0';

  // Del the last backslash
  char *lastSlash = strrchr(installPath, '/');
  if (lastSlash != NULL)
    *lastSlash = '\0';

  // Init the loop & usr int var
  int loop = 1,
      usr;

  while (loop) {
    // Show the Crun menu
    menu(1);

    // Take the usr input option
    scanf("%d", &usr);

    //* Run the program
    Crun(&loop, usr);
  }

  if (usr) {
    //* Notify the user
    printf("%sInstallation Complete!%s\n", green, def);

    //* Open the directory
    execl("/usr/bin/xdg-open", "xdg-open", installPath, (char *)NULL);
  }

  return 0;
}
