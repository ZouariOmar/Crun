/* -----------------------------------------------
* @author: @zouari_omar
* @IDE:    vsc
* @update: 06/04/24
? @file:   main.c
----------------------------------------------- */

//? -------------------- INCLUDE PROTOTYPE DECLARATION PART --------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include "../pkg/color.h"

//? ----------------------- FUNCTIONS PROTOTYPE DEV PART -----------------------

/**
 * @brief the main Crun fn
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const **argv)
{
    printf(
        "%s\t\t================== Create_C_Project ==================\n"
        "\t\t================== By__Zouari__Omar ==================\n"
        "\t\t===== Visit Us In: https://github.com/ZouariOmar =====%s\n.\n.\n.\n", bleu, def);

    // * Set the installation path to the directory where the executable is located
    char installPath[PATH_MAX];

    // * get the current user path directory
    ssize_t len = readlink("/proc/self/exe", installPath, sizeof(installPath) - 1);
    if (len == -1)
    {
        perror("readlink");
        return 1;
    }
    installPath[len] = '\0';

    // * delete the last backslash
    char *lastSlash = strrchr(installPath, '/');
    if (lastSlash != NULL)
        *lastSlash = '\0';

    int loop = 1;

    while (loop)
    {
        int usr;

        printf(
            "%s---------------------------\n"
            "[1] C Project Enviornment.  \n"
            "[2] C++ Project Enviornment.\n"
            "[0] exit                    \n"
            "---------------------------\n"
            "...%s", yellow, def);
        scanf("%d", &usr);

        switch (usr)
        {
        // * usr choice option 1
        case 1:
            system("git clone https://github.com/ZouariOmar/Create_C_Project.git Create_C_Project");
            loop = 0;
            break;

        // * usr choice option 2
        case 2:
            system("git clone https://github.com/ZouariOmar/Creat-Cpp-Project.git");
            loop = 0;
            break;

        // * usr choice to quit
        case 0:
            printf(".\n.\n.\n%sSee You Next Time !%s\n.\n.\n.", green, def);
            return 0;

        // * other options
        default:
            printf(".\n.\n.\n%sInvalid Option !%s\n.\n.\n.\n", red, def);
            break;
        }
    }
    printf(".\n.\n.\n");

    // * notify the user
    printf("%sInstallation Complete!%s\n", green, def);

    // * open the directory
    execl("/usr/bin/xdg-open", "xdg-open", installPath, (char *)NULL);

    return 0;
}
