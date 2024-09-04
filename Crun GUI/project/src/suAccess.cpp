/***************************************************
 * @file      mainwindow.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

#include "../inc/suAccess.hpp"

Ui::MyDialog::MyDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::MyDialog) {
  // Setup the UI
  ui->setupUi(this);
}

Ui::MyDialog::~MyDialog() {
  delete ui;
}