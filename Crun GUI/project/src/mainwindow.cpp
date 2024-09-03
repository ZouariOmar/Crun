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

  // If project title is empty and 2 other cases have -1 index
  if (c.pId == -1 || c.pTitle == "" || !with_buildSys()) {
    QMessageBox::warning(this, "Warning", "Fill The Empty Cases !\n");
    return;
  }

  c.pEnv = ui->comboBox->currentText();
  (with_buildSys()) ? c.bSys = ui->comboBox_2->currentText() : c.bSys = "";
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


