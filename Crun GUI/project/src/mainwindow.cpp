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
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  //* Set windows title
  this->setWindowTitle("Crun");

  //* Crun GUI Stylesheet part
  this->setStyleSheet(
      "QPushButton:hover { background-color: red; }");
}

MainWindow::~MainWindow() {
  delete ui;
}
