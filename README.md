<!-- @format -->

# Crun

**A simple program for starting a new project.**

## Overview

The provided C code serves as a project initiation script named "Crun." Its primary functionality is to automate the setup process for a new C project by cloning a templates from multiple [@ZouariOmar](https://github.com/ZouariOmar) GitHub repository's. The project structure includes essential directories such as src, bin (with subdirectories for different build configurations), and res (for resources). The main function prints project information, determines the installation path, clones the template project, opens the installation directory, and displays a completion message. The script is tailored for Linux environments, utilizing Linux API functions.

## Project Structure

```bash
.Crun
├── bin
│   ├── build
│   │   ├── CMakeCache.txt
│   │   ├── CMakeFiles
│   │   │   ├── 3.29.3
│   │   │   │   ├── CMakeCCompiler.cmake
│   │   │   │   ├── CMakeCXXCompiler.cmake
│   │   │   │   ├── CMakeDetermineCompilerABI_C.bin
│   │   │   │   ├── CMakeDetermineCompilerABI_CXX.bin
│   │   │   │   ├── CMakeSystem.cmake
│   │   │   │   ├── CompilerIdC
│   │   │   │   │   ├── a.out
│   │   │   │   │   ├── CMakeCCompilerId.c
│   │   │   │   │   └── tmp
│   │   │   │   └── CompilerIdCXX
│   │   │   │       ├── a.out
│   │   │   │       ├── CMakeCXXCompilerId.cpp
│   │   │   │       └── tmp
│   │   │   ├── cmake.check_cache
│   │   │   ├── CMakeConfigureLog.yaml
│   │   │   ├── CMakeDirectoryInformation.cmake
│   │   │   ├── Crun.dir
│   │   │   │   ├── build.make
│   │   │   │   ├── cmake_clean.cmake
│   │   │   │   ├── compiler_depend.make
│   │   │   │   ├── compiler_depend.ts
│   │   │   │   ├── DependInfo.cmake
│   │   │   │   ├── depend.make
│   │   │   │   ├── flags.make
│   │   │   │   ├── home
│   │   │   │   │   └── zouari_omar
│   │   │   │   │       └── Documents
│   │   │   │   │           └── Daily
│   │   │   │   │               └── Projects
│   │   │   │   │                   └── Crun
│   │   │   │   │                       └── Crun
│   │   │   │   │                           └── project
│   │   │   │   │                               └── src
│   │   │   │   │                                   ├── lib.c.o
│   │   │   │   │                                   ├── lib.c.o.d
│   │   │   │   │                                   ├── main.c.o
│   │   │   │   │                                   └── main.c.o.d
│   │   │   │   ├── link.txt
│   │   │   │   └── progress.make
│   │   │   ├── Makefile2
│   │   │   ├── Makefile.cmake
│   │   │   ├── pkgRedirects
│   │   │   ├── progress.marks
│   │   │   └── TargetDirectories.txt
│   │   ├── Crun
│   │   └── Makefile
│   ├── debug
│   │   └── app
│   ├── release
│   │   ├── Crun
│   │   └── Crun.exe
│   └── test
│       └── test
├── Crun.code-workspace
├── doc
│   └── notes.txt
├── LICENSE
├── pkg
│   ├── build.sh
│   ├── CMakeLists.txt
│   └── color.h
├── project
│   ├── inc
│   │   └── inc.h
│   ├── res
│   │   └── img
│   │       └── Crun.ico
│   └── src
│       ├── lib.c
│       └── main.c
├── README.md
└── run.sh

30 directories, 48 files
```

## How to Use

To lunch the project on your Linux system, follow these steps:

1. **Clone the Repository**:

   ```sh
   git clone https://github.com/ZouariOmar/Crun.git
   ```

2. **Navigate to the Directory**:

   ```sh
   cd Crun
   ```

3. **Build the Application**:

   ```sh
   make
   ```

4. **Run the Application**:

   ```sh
   ./bin/build/app
   ```

---

## Download Link: [Crun Project Download](https://www.mediafire.com/file/zxp1u5lp3fnifzi/Crun.zip/file)

---

## Contributing

We welcome contributions from the community. If you wish to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Create a new Pull Request.

Please make sure your code adheres to our coding standards and includes appropriate tests.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact

If you have any questions or suggestions, please feel free to reach out to us at [zouariomar20@gmail.com](mailto:zouariomar20@gmail.com)
