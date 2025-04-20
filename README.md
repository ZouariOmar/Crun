<!-- @format -->

# Crun

**A simple program for starting a new project.**

## Overview

The provided C code serves as a project initiation script named "Crun." Its primary functionality is to automate the setup process for a new C project by cloning a templates from multiple [@ZouariOmar](https://github.com/ZouariOmar) GitHub repository's. The project structure includes essential directories such as src, bin (with subdirectories for different build configurations), and res (for resources). The main function prints project information, determines the installation path, clones the template project, opens the installation directory, and displays a completion message. The script is tailored for Linux environments, utilizing Linux API functions.

## Project Structure

```bash
.Crun
├── CLI
│   ├── bin
│   │   ├── build
│   │   ├── debug
│   │   ├── release
│   │   │   └── Crun
│   │   └── test
│   ├── conf
│   │   └── CMakeLists.txt
│   ├── imgs
│   │   └── Crun.ico
│   ├── project
│   │   ├── import
│   │   │   ├── color.h
│   │   │   └── patterns.hpp
│   │   ├── include
│   │   │   └── inc.hpp
│   │   └── src
│   │       ├── lib.cpp
│   │       └── main.cpp
│   └── run.sh
├── doc
│   └── notes.txt
├── GUI
│   ├── bin
│   │   ├── build
│   │   ├── debug
│   │   │   └── debug
│   │   ├── release
│   │   │   └── Crun
│   │   └── test
│   │       └── test
│   ├── conf
│   │   ├── CMakeLists.txt
│   │   └── test
│   │       └── CMakeLists.txt
│   ├── Crun GUI.code-workspace
│   ├── doc
│   │   ├── pdf
│   │   │   └── NONE.pdf
│   │   └── TODO.md
│   ├── download
│   │   └── download
│   ├── pkg
│   │   └── CMakeLists.txt
│   ├── project
│   │   ├── doc
│   │   │   └── doc
│   │   ├── inc
│   │   │   ├── mainwindow.hpp
│   │   │   └── suAccess.hpp
│   │   ├── qss style
│   │   │   └── style.qss
│   │   ├── res
│   │   │   ├── CrunIco.qrc
│   │   │   ├── Crun.qrc
│   │   │   ├── imgs
│   │   │   │   ├── Crun.ico
│   │   │   │   └── Crun.png
│   │   │   ├── mainWindow.ui
│   │   │   └── suAccess.ui
│   │   └── src
│   │       ├── main.cpp
│   │       ├── mainwindow.cpp
│   │       └── suAccess.cpp
│   └── run.sh
├── LICENSE
└── README.md

33 directories, 36 files
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

## Download Link: [Crun](https://www.mediafire.com/file/yufib9zbdljwy7g/Crun.zip/file)

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
