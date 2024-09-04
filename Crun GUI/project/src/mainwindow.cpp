/***************************************************
 * @file      mainwindow.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/mainwindow.hpp"

//? --------------------------------- FUNCTIONS PROTOTYPE DEV PART ---------------------------------

/**
 * @brief ### Construct a new Main Window::Main Window object
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  //* Set windows title
  this->setWindowTitle("Crun");

  //* Set the current usr path
  c.cPath = std::filesystem::current_path();

  //* Crun GUI Stylesheet part
  this->setStyleSheet(
      "QPushButton:hover { background-color: red; }");
}

/**
 * @brief ### Destroy the Main Window::Main Window object
 */
MainWindow::~MainWindow() {
  delete ui;
}

/***************************
 *? === Buttons Dev Part ===
 **************************/

/**
 * @brief ### The CrunGUI runner button
 */
void MainWindow::on_pushButton_clicked() {
  c.pTitle = ui->lineEdit->text();
  c.pId = ui->comboBox->currentIndex();
  c.bId = ui->comboBox_2->currentIndex();

  // If project title is empty ot the 2 other cases have -1 index
  if (c.pId == -1 || c.pTitle == "" || !with_buildSys()) {
    QMessageBox::warning(this, "Warning", "Fill The Empty Cases !\n");
    return;
  }

  c.pEnv = ui->comboBox->currentText();
  (with_buildSys()) ? c.bSys = ui->comboBox_2->currentText() : c.bSys = "";

  //* Get the sudo password

  //* Setup the project
  setup_prj();

  //* Notify the usr
  notify(this);
}

/**
 * @brief ### Enable/Disable the build system QComboBox
 * @param index
 */
void MainWindow::on_comboBox_currentIndexChanged(int index) {
  if (index == 0 || index == 1 || index == 6) {
    ui->comboBox_2->setDisabled(true);
    ui->comboBox_2->setCurrentIndex(-1);
    return;
  }

  ui->comboBox_2->setDisabled(false);
}

/**********************************
 *? === Custom Methods Dev Part ===
 *********************************/

/**
 * @brief ### Return `true` if the project need build system
 * @return true
 * @return false
 */
inline bool CrunGUI::with_buildSys() {
  return (c.bId != -1 || c.pId == 0 || c.pId == 1 || c.pId == 6);
}

/**
 * @brief ### Setup Crun GUI project
 */
void CrunGUI::setup_prj() {
  // Get the Old Prj name
  std::string oldPrj = getOldPrjName();

  // Clone the project
  clone_prj(oldPrj);

  // Set the project workspace name
  std::string cmd = "sudo mv '" + c.pTitle.toStdString() + "'/" + oldPrj +
        ".code-workspace '" + c.pTitle.toStdString() + "/" +
        c.pTitle.toStdString() + ".code-workspace'";
  system(cmd.c_str());

  // Make run.sh exuded
  cmd = "sudo chmod +x '" + c.pTitle.toStdString() + "'/run.sh";
  system(cmd.c_str());

  // Del the unecessary files
  cmd = "sudo rm -r '" + c.pTitle.toStdString() + "'/.git '" + c.pTitle.toStdString() + "'/README.md '" + c.pTitle.toStdString() + "'/LICENSE";
  system(cmd.c_str());

  // Add the build sys
  if (c.bId != -1) {
    cmd = "cmake -S '" + c.pTitle.toStdString() + "'/pkg -B '" + c.pTitle.toStdString() + "'/bin/build -G '" + c.bSys.toStdString() + "'";
    system(cmd.c_str());
  }
}

void CrunGUI::clone_prj(std::string oldPrj) {
  //* Clone the Project
  std::string cmd = "git clone https://github.com/ZouariOmar/" + oldPrj + ".git";
  system(cmd.c_str());

  // Set the project title
  cmd = "sudo mv " + oldPrj + " '" + c.pTitle.toStdString() + "'";
  system(cmd.c_str());
}

/**
 * @brief
 *
 * @return std::string
 */
std::string CrunGUI::getOldPrjName() {
  switch (c.pId) {
    //? ------------------- C PROJECTS PART -------------------
    //* Clone the 'Quick C Project Enviornment'
    case 0:
      return "Quick_C_Project_Environment";

    //* Clone the 'C Project Enviornment'
    case 2:
      return "C_Project_Environment";

    //* Clone the 'C-SDL1.2 Project Enviornment'
    case 4:
      return "C-SDL1.2_Project_Environment";

    //? ------------------- C++ PROJECTS PART -------------------
    //* Clone the 'Quick C++ Project Enviornment'
    case 1:
      return "Quick_Cpp_Project_Environment";

    //* Clone the 'C++ Project Enviornment'
    case 3:
      return "Cpp_Project_Environment";

    //* Clone the 'C++-Qt Project Enviornment'
    case 5:
      return "Cpp-Qt_Project_Environment";

    //? ------------------- WEB PROJECTS PART -------------------
    //* Clone the 'Web Project Enviornment'
    case 6:
      return "Run_Web_Project";
  }

  return "";
}

/**
 * @brief ### Installation Complete successfully notification
 */
void MainWindow::notify(MainWindow *t) {
  //* Notify the user
  QMessageBox::about(t, "Notificaion", "Installation Complete!\n");

  //* Open the directory
  system(("xdg-open " + c.cPath).c_str());

  //* Open the project with VSC
  system(("code " + c.pTitle.toStdString() + "/" + c.pTitle.toStdString() + ".code-workspace").c_str());
}