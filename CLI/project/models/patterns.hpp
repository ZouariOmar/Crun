/**
 * @file patterns.hpp
 * @author ZouariOmar (zouariomar20@gmail.com)
 * @brief Pre-Processor patterns
 * @version 0.1
 * @date 2024-10-19
 *
 * @copyright Copyright (c) 2024
 *
 */

//? Include prototype declaration part
// Stander C++ libs
#include <iostream>

// Custom include files
#include "color.h"

//? Menus patterns
#define CRUN system("echo \"\033[0;32m$(figlet -w $(tput cols) '                             Crun - V1.1.1')\033[0m\"")
#define MENU0(color, reset) std::cout << color << "\t\t\t\t=================== Crun Project ===================\n\t\t\t\t================== By @ZouariOmar ==================\n\t\t\t\t==== Visit Us In: https://github.com/ZouariOmar ====\n\n" \
                                      << reset
#define MENU1(color1, color2, color3, reset) std::cout << color1 << "\t\t---------------------------------------------------------------------------------------------------\n" \
                                                                    "\t\t\t[1] Quick C/C++ Project Env                [2] C/C++ Project Env\n"                                  \
                                                                    "\t\t\t[3*] SDL1.2/SDL2.0 C/C++ Project Env       [4*] QT5/QT6 C/C++ Project Env\n"                         \
                                                                    "\t\t\t[5*] PIC16F84(A) C/C++ Project Env         [6*] ESP32 C/C++ Project Env\n"                                                  \
                                                                    "\t\t\t[7*] Web Project Enviornment               [8*] ReactJS Project Enviornment\n"                       \
                                                                    "\t\t\t                         [0] Exit                     \n"                                            \
                                                       << color2 << "\t\tVisit https://github.com/ZouariOmar/Crun for more info\n"                                              \
                                                       << color3 << "\t\t---------------------------------------------------------------------------------------------------\n" \
                                                                    "..."                                                                                                       \
                                                       << reset
#define MENU2(color1, color2, color3, reset) std::cout << color1 << "\n\n\t\t---------------------------------------------------------------------------------------------------\n" \
                                                       << color2 << "\t\tChose your build system:\n"                                                                                \
                                                       << color3 << "\t\t\t\t\t\t[1] Make (default) \n"                                                                             \
                                                                    "\t\t\t\t\t\t[2] Ninja          \n"                                                                             \
                                                                    "\t\t\t\t\t\t[0] Exit           \n"                                                                             \
                                                                    "\t\t---------------------------------------------------------------------------------------------------\n"     \
                                                                    "..."                                                                                                           \
                                                       << reset
#define MENU3(color1, reset) std::cout << color1 << "\n\nProject Name..." << reset

//? Messages patterns
#define INVALID_OPTION_MSG std::cout << red << "\n\nInvalid Option !\n\n" \
                                     << def
#define EXIT_SUCCESS_MSG std::cout << green << "\n\nSee You Next Time !\n\n" \
                                   << def

//? CMD's patterns
#define CMAKE(project_title, build_sys) "cmake -S '" + project_title + "'/pkg -B '" + project_title + "'/bin/build -G '" + build_sys + "'";