// by_zouari_omar_full_stack_c/c++_dev
// 01/08/2024
// Crun Project
                    /* INCLUDE PROTOTYPE DECLARATION PART */
#include <stdio.h>
#include <windows.h>
                    /* MAIN() INT FUNCTION DEV PART */
int main(int argc, char const *argv[]) {
    printf(
        "\t\t================== Create_C_Project ==================\n"
        "\t\t================== By__Zouari__Omar ==================\n"
        "\t\t===== Visit Us In: https://github.com/ZouariOmar =====\n.\n.\n.\n");
    // Set the installation path to the directory where the executable is located
    char installPath[MAX_PATH];
    GetModuleFileName(NULL, installPath, MAX_PATH);
    char* lastBackslash = strrchr(installPath, '\\');
    if(lastBackslash != NULL) *lastBackslash = '\0';
    system("git clone https://github.com/ZouariOmar/Create_C_Project.git Create_C_Project");
    printf(".\n.\n.");
    ShellExecute(NULL, "open", installPath, NULL, NULL, SW_SHOWNORMAL);
    MessageBox(NULL, "Installation Complete !", "Crun", MB_OK);
    return 0;
}