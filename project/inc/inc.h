/***************************************************
 * @file      inc.h
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef __INC_H__
#define __INC_H__

//? -------------------- INCLUDE PROTOTYPE DECLARATION PART --------------------
#include "../../pkg/color.h"
#include <limits.h>
#include <linux/limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//? ----------------------- FUNCTIONS DECLARATION PART -----------------------

void menu(int);
void Crun(int *, int);
void clone_project(char *, char *, char *, int *);
char *built_sys();
void prj_name(char *);

#endif // __INC_H__