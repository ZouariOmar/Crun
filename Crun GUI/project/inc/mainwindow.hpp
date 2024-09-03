/***************************************************
 * @file      mainwindow.hpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      2024-06-06
 * @copyright Copyright (c) 2024
 ***************************************************/

#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

//? ----------------------------- INCLUDE PROTOTYPE DECLARATION PART -----------------------------
#include <QDebug>
#include <QMainWindow>
#include <QMessageBox>

#include "../res/ui_mainWindow.h"

//? ------------------------------ COLORS PROTOTYPE DECLARATION PART ------------------------------
/*
 * TEXT COLORS
 ** define COLOR "ANSI CODE"...
 * BACKGROUND COLORS
 ** define bgCOLOR "ANSI CODE"...
 */

//? -------------------------------  MSG PROTOTYPE DECLARATION PART -------------------------------
/*
 * ERROR_MSG
 ** define errorMsgXX...
 * SUCCESS_MSG
 ** define successMsgXX...
 */

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------
struct CrunStrut {  //? Crun Structure
  QString pTitle,   // Project title
      pEnv,         // Project enviornment
      bSys;         // Build system
  int pId,          // Project ID (QComboBox index holder)
      bId;          // Build system ID (QComboBox index holder)
};

//? ----------------------------- FUNCTIONS PROTOTYPE DECLARATION PART -----------------------------
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class CrunGUI {
 protected:
  // Protected vars declaration part
  CrunStrut c;

  // Protected Custom methods declaration part
  inline bool with_buildSys();

};  // CrunGUI class

class MainWindow : public QMainWindow, public CrunGUI {
  Q_OBJECT

 private:
  Ui::MainWindow *ui;

 private slots:
  void on_pushButton_clicked();
  void on_comboBox_currentIndexChanged(int);

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
};
#endif  // MAINWINDOW_H
