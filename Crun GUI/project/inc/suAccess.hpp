/***************************************************
 * @file      suAccess.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef __SUACCESS_HPP__
#define __SUACCESS_HPP__

#include <QDialog>
#include <QProcess>
#include <iostream>

#include "../res/ui_suAccess.h"

namespace Ui {
class suAccess;
}

class suAccess : public QDialog {
  Q_OBJECT

 public slots:
  void on_pushButton_clicked();

 private slots:

 private:
  Ui::Form* ui;

 public:
  std::string usrPass;
  suAccess(QWidget*);
  ~suAccess();
};

#endif  // SuAccess_H
