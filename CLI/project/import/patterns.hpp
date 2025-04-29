/**
 * @file      patterns.hpp
 * @author    ZouariOmar (zouariomar20@gmail.com)
 * @brief     patterns header file
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
#define MENU1                                                                                                     \
  std::cout << yellow                                                                                             \
            << "\t\t------------------------------------------------------------------------------------------\n" \
            << red                                                                                                \
            << "\t\t\tC Projects:\n"                                                                              \
            << yellow                                                                                             \
            << "\t\t\t[1] C Code Practice Env      [2] C Contest Env         [3] Quick C Project Env\n"           \
               "\t\t\t[4] Normal C Project Env     [5] SDL C Project Env     [6] Qt C Project Env\n"              \
               "\t\t\t[7] Arduino C Project Env\n"                                                                \
            << red                                                                                                \
            << "\t\t\tC++ Projects:\n"                                                                            \
            << yellow                                                                                             \
            << "\t\t\t[8] C++ Code Practice Env    [9] C++ Contest Env       [10] Quick C++ Project Env\n"        \
               "\t\t\t[11] Normal C++ Project Env  [12] SDL C++ Project Env  [13] Qt C++ Project Env\n"           \
               "\t\t\t[7] Arduino C Project Env\n"                                                                \
               "\t\t\t[0] Exit\n"                                                                                 \
            << red                                                                                                \
            << "\t\tVisit https://github.com/ZouariOmar/Crun for more info\n"                                     \
            << yellow                                                                                             \
            << "\t\t------------------------------------------------------------------------------------------\n" \
               "..."                                                                                              \
            << def
#define MENU2 std::cout << yellow << "\n\nProject Name..." << def

//? Messages patterns
#define INVALID_OPTION_MSG std::cout << red << "\n\n[WARR] Invalid Option !\n\n" \
                                     << def
#define EXIT_SUCCESS_MSG                                        \
  std::cout << green << "\n\n[SUCCESS] See You Next Time !\n\n" \
            << def

#define INSTALLATION_COMPLETE_MSG std::cout << green << "Installation Complete!\nHAPPY CODING ⚡️" \
                                            << def

//? Internal Crun patterns
#define CRUN_CLI_FLAGS_PATTERN "-p([1-9]+)|-n([A-Za-z]+)"

//? CMD's patterns
#define _GET(x)                                                              \
  "wget https://github.com/ZouariOmar/Cpkg/raw/refs/heads/main/templates/" + \
      x + ".zip";
#define _UNZIP(x) "unzip " + x;
#define _DEL_ZIP(x) "rm " + x + ".zip";
#define _SET_NAME(x, y) \
  "mv " + x + " '" + y + "'";
