/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_5;
    QComboBox *comboBox;
    QComboBox *comboBox_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(491, 302);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 280, 161, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Fira Code"));
        font.setPointSize(10);
        label->setFont(font);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 471, 231));
        groupBox->setFont(font);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 40, 261, 26));
        lineEdit->setFont(font);
        lineEdit->setTabletTracking(false);
        lineEdit->setMaxLength(32767);
        lineEdit->setFrame(true);
        lineEdit->setEchoMode(QLineEdit::EchoMode::Normal);
        lineEdit->setCursorPosition(0);
        lineEdit->setDragEnabled(true);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 37, 111, 31));
        label_3->setFont(font);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 130, 101, 41));
        label_4->setFont(font);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 190, 431, 26));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Fira Code"));
        font1.setPointSize(11);
        pushButton->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 80, 151, 41));
        label_5->setFont(font);
        comboBox = new QComboBox(groupBox);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("applications-other")));
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->addItem(icon, QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(190, 90, 261, 26));
        comboBox->setFont(font);
        comboBox->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox->setMouseTracking(false);
        comboBox->setAutoFillBackground(false);
        comboBox->setMaxVisibleItems(10);
        comboBox->setDuplicatesEnabled(false);
        comboBox_2 = new QComboBox(groupBox);
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("application-x-executable")));
        comboBox_2->addItem(icon1, QString());
        comboBox_2->addItem(icon1, QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(190, 140, 261, 26));
        comboBox_2->setFont(font);
        comboBox_2->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        comboBox->setCurrentIndex(-1);
        comboBox_2->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Crun - Version 1.1.0", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Project Configuration", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Project Title...", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Project Title", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Build System", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Project Enviorment", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Quick C Project Enviornment", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Quick C++ Project Enviornment", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "C Project Enviornment", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "C++ Project Enviornment", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "C-SDL1.2 Project Enviornment", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "C++-Qt Project Enviornment", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "Web Project Enviornment", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Make", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Ninja", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
