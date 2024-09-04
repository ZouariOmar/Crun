/***************************************************
 * @file      mainwindow.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

// MyDialog.h
#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>

// Include the generated UI header file
#include "../res/ui_suAccess.h"

class MyDialog : public QDialog {
  Q_OBJECT

 public:
  explicit MyDialog(QWidget *parent = nullptr);
  ~MyDialog();

 private:
  Ui::MyDialog *ui;
};

#endif  // MYDIALOG_H
