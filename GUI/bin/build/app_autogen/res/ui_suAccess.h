/********************************************************************************
** Form generated from reading UI file 'suAccess.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUACCESS_H
#define UI_SUACCESS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(491, 133);
        QFont font;
        font.setFamily(QString::fromUtf8("Fira Code"));
        font.setPointSize(10);
        Form->setFont(font);
        Form->setAcceptDrops(true);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("QIcon::ThemeIcon::SecurityHigh")));
        Form->setWindowIcon(icon);
        Form->setWindowOpacity(0.800000000000000);
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 100, 71, 26));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setCheckable(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 100, 71, 26));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Fira Code"));
        font1.setPointSize(10);
        font1.setItalic(true);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 50, 451, 26));
        lineEdit->setMaxLength(32767);
        lineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(20, 30, 111, 18));
        label->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        label->setFrameShadow(QFrame::Shadow::Plain);
        label->setTextFormat(Qt::TextFormat::AutoText);
        label->setScaledContents(false);
        label->setWordWrap(false);
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(310, 30, 151, 20));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_2->setFrameShadow(QFrame::Shadow::Plain);

        retranslateUi(Form);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Form, SLOT(close()));

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "Ok", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("Form", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton_2->setText(QCoreApplication::translate("Form", "Cancel", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("Form", "Password...", nullptr));
        label->setText(QCoreApplication::translate("Form", "Sudo Password:", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Incorrect Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUACCESS_H
