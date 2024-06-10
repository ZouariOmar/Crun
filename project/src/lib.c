#include "../inc/inc.h"

void mkdir_c_cpp() {
  system("mkdir -p Run_C_Project/project/src Run_C_Project/project/inc Run_C_Project/project/res &&"
         "mkdir -p Run_C_Project/project/doc/pdf Run_C_Project/download &&"
         "mkdir -p Run_C_Project/pkg Run_C_Project/.vscode Run_C_Project/.github &&"
         "mkdir -p Run_C_Project/bin/build Run_C_Project/bin/test Run_C_Project/bin/debug Run_C_Project/bin/release");
}

void touch_quick_c() {
  //* Exportation part
  // system("cd Run_C_Project/project/src && wget https://raw.githubusercontent.com/ZouariOmar/Cframe/main/Quick%20C%20Project%20Environment/project/src/main.c && wget https://raw.githubusercontent.com/ZouariOmar/Cframe/main/Quick%20C%20Project%20Environment/project/src/lib.c");
  // system("cd Run_C_Project/project/inc && wget https://raw.githubusercontent.com/ZouariOmar/Cframe/main/Quick%20C%20Project%20Environment/project/inc/inc.h");
  // system("cd Run_C_Project/pkg && wget https://raw.githubusercontent.com/ZouariOmar/Cframe/main/Quick%20C%20Project%20Environment/pkg/C-Cpp_pkg.sh");
  // system("cd Run_C_Project/pkg && wget https://raw.githubusercontent.com/ZouariOmar/Cframe/main/Quick%20C%20Project%20Environment/pkg/C-Cpp_pkg.cmd");
  // system("cd Run_C_Project/.github wget https://raw.githubusercontent.com/ZouariOmar/Cframe/main/Quick%20C%20Project%20Environment/github/.gitignore");
  system("cd Run_C_Project/.vscode wget https://raw.githubusercontent.com/ZouariOmar/Cframe/main/Quick%20C%20Project%20Environment/vscode/c_cpp_properties.json");
  // system("cd Run_C_Project/.vscode wget https://raw.githubusercontent.com/ZouariOmar/Cframe/main/Quick%20C%20Project%20Environment/vscode/launch.json");
  // system("cd Run_C_Project/.vscode wget https://raw.githubusercontent.com/ZouariOmar/Cframe/main/Quick%20C%20Project%20Environment/vscode/settings.json");

  //* Touching part
  system("touch Run_C_Project/bin/build/build Run_C_Project/bin/debug/debug");
}