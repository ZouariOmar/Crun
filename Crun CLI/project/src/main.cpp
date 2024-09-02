/***************************************************
 * @file      main.cpp
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
 * @brief # The main Crun function
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const **argv) {
  if (argc == 1)
    Crun c;
  else if (argc == 3)
    Crun c(string{argv[1]} + string{argv[2]});
  else if (argc == 5)
    Crun c(string{argv[1]} + string{argv[2]}, string{argv[3]} + string {argv[4]});
  else if (argc == 7)
    Crun c(string{argv[1]} + string{argv[2]}, string{argv[3]} + string{argv[4]}, string{argv[5]} + string{argv[6]});

  return 0;
}
