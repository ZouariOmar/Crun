/**
 * @file      patterns.hpp
 * @author    ZouariOmar (zouariomar20@gmail.com)
 * @brief     Pre-Processor patterns
 * @version   0.1
 * @date      2024-10-19
 * @copyright Copyright (c) 2024
 */

// Custom include files
#include "color.h"

//? Menus patterns
#define CRUN                                                                   \
  system("echo \"\033[0;32m$(figlet -w $(tput cols) '                        " \
         "        Crun - V1.2')\033[0m\"")
#define MENU0                                                               \
  std::cout << bleu                                                         \
            << "\t\t\t\t=================== Crun Project "                  \
               "===================\n\t\t\t\t================== By "        \
               "@ZouariOmar ==================\n\t\t\t\t==== Visit Us In: " \
               "https://github.com/ZouariOmar ====\n\n"                     \
            << def
#define MENU1                                                                                                              \
  std::cout << yellow                                                                                                      \
            << "\t\t---------------------------------------------------------------------------------------------------\n" \
               "\t\t\t[1] Quick C/C++ Project Env                [2] C/C++ Project Env\n"                                  \
               "\t\t\t[3] SDL1.2/SDL2.0 C/C++ Project Env        [4] QT5/QT6 C/C++ Project Env\n"                          \
               "\t\t\t[5*] ESP32 C/C++ Project Env               [6] Web Project Enviornment\n"                            \
               "\t\t\t               [7*] ReactJS Project Enviornment\n"                                                   \
               "\t\t\t                         [0] Exit                     \n"                                            \
            << red                                                                                                         \
            << "\t\tVisit https://github.com/ZouariOmar/Crun for more info\n"                                              \
            << yellow                                                                                                      \
            << "\t\t---------------------------------------------------------------------------------------------------\n" \
               "..."                                                                                                       \
            << def
#define MENU2 std::cout << yellow << "\n\nProject Name..." << def

//? Messages patterns
#define INVALID_OPTION_MSG std::cout << red << "\n\nInvalid Option !\n\n" \
                                     << def
#define EXIT_SUCCESS_MSG                              \
  std::cout << green << "\n\nSee You Next Time !\n\n" \
            << def

//? CMD's patterns
#define _GET(x)                                                              \
  "wget https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/templates/" + \
      x + ".zip";
#define _UNZIP(x) "unzip " + x;
#define _DEL_ZIP(x) "rm " + x + ".zip";
#define _SET_NAME(x, y) \
  "mv " + x + " '" + y + "'";
