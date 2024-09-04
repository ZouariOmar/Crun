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
#include <QProcess>
#include <filesystem>

#include "../res/ui_mainWindow.h"

//? ------------------------------ STRUCT PROTOTYPE DECLARATION PART ------------------------------
struct CrunStrut {    //? Crun Structure
  QString pTitle,     // Project title
      pEnv,           // Project enviornment
      bSys;           // Build system
  std::string cPath;  // Current usr path
  int pId,            // Project ID (QComboBox index holder)
      bId;            // Build system ID (QComboBox index holder)
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
  void setup_prj();
  std::string getOldPrjName();
  void clone_prj(std::string);

};  // CrunGUI class

class MainWindow : public QMainWindow, public CrunGUI {
  Q_OBJECT

 private:
  Ui::MainWindow *ui;

 private slots:
  void on_pushButton_clicked();
  void on_comboBox_currentIndexChanged(int);

  void notify(MainWindow *);

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();
};
#endif  // MAINWINDOW_H
