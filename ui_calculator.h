/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "button.h"

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLineEdit *inputScreen;
    QLineEdit *outputScreen;
    Button *btnSeven;
    Button *btnFour;
    Button *btnOne;
    Button *btnDot;
    Button *btnEight;
    Button *btnSix;
    Button *btnFive;
    Button *btnNine;
    Button *btnTwo;
    Button *btnThree;
    Button *btnZero;
    Button *btnEqual;
    Button *btnClear;
    Button *btnPlus;
    Button *btnMinus;
    Button *btnMultiplication;
    Button *btnDivision;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(300, 401);
        inputScreen = new QLineEdit(Form);
        inputScreen->setObjectName(QString::fromUtf8("inputScreen"));
        inputScreen->setGeometry(QRect(0, 0, 300, 100));
        inputScreen->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(7, 12, 41);\n"
"font-family: 'Arial'; \n"
"font-size: 50px;\n"
"color: #ffffff; \n"
"border: none;\n"
"padding-top: 25px;\n"
"padding-bottom: 25px;\n"
"padding-right: 10px; \n"
"padding-left: 10px;\n"
"}"));
        outputScreen = new QLineEdit(Form);
        outputScreen->setObjectName(QString::fromUtf8("outputScreen"));
        outputScreen->setGeometry(QRect(0, 100, 300, 100));
        outputScreen->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"background-color: rgb(7, 12, 41);\n"
"font-family: 'Arial'; \n"
"font-size: 50px;\n"
"color: #ffffff; \n"
"border: none;\n"
"}"));
        btnSeven = new Button(Form, "7");
        btnSeven->setObjectName(QString::fromUtf8("btnSeven"));
        btnSeven->setGeometry(QRect(0, 200, 75, 50));
        btnSeven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnFour = new Button(Form, "4");
        btnFour->setObjectName(QString::fromUtf8("btnFour"));
        btnFour->setGeometry(QRect(0, 250, 75, 50));
        btnFour->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnOne = new Button(Form, "1");
        btnOne->setObjectName(QString::fromUtf8("btnOne"));
        btnOne->setGeometry(QRect(0, 300, 75, 50));
        btnOne->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnDot = new Button(Form, ".");
        btnDot->setObjectName(QString::fromUtf8("btnDot"));
        btnDot->setGeometry(QRect(0, 350, 75, 50));
        btnDot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnEight = new Button(Form, "8");
        btnEight->setObjectName(QString::fromUtf8("btnEight"));
        btnEight->setGeometry(QRect(75, 200, 75, 50));
        btnEight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnSix = new Button(Form, "6");
        btnSix->setObjectName(QString::fromUtf8("btnSix"));
        btnSix->setGeometry(QRect(150, 250, 75, 50));
        btnSix->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnFive = new Button(Form, "5");
        btnFive->setObjectName(QString::fromUtf8("btnFive"));
        btnFive->setGeometry(QRect(75, 250, 75, 50));
        btnFive->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnNine = new Button(Form, "9");
        btnNine->setObjectName(QString::fromUtf8("btnNine"));
        btnNine->setGeometry(QRect(150, 200, 75, 50));
        btnNine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnTwo = new Button(Form, "2");
        btnTwo->setObjectName(QString::fromUtf8("btnTwo"));
        btnTwo->setGeometry(QRect(75, 300, 75, 50));
        btnTwo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnThree = new Button(Form, "3");
        btnThree->setObjectName(QString::fromUtf8("btnThree"));
        btnThree->setGeometry(QRect(150, 300, 75, 50));
        btnThree->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnZero = new Button(Form, "0");
        btnZero->setObjectName(QString::fromUtf8("btnZero"));
        btnZero->setGeometry(QRect(75, 350, 75, 50));
        btnZero->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnEqual = new Button(Form, "=");
        btnEqual->setObjectName(QString::fromUtf8("btnEqual"));
        btnEqual->setGeometry(QRect(150, 350, 75, 50));
        btnEqual->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(180, 215, 253, 255); \n"
" border: none; \n"
" color: rgb(7, 12, 41);\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 21px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(97, 182, 253);\n"
"}"));
        btnClear = new Button(Form, " ");
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setGeometry(QRect(225, 200, 75, 40));
        btnClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(47, 80, 195, 255); \n"
" border: none; \n"
" color: #ffffff;\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(38, 151, 253);\n"
"}"));
        btnPlus = new Button(Form, "+");
        btnPlus->setObjectName(QString::fromUtf8("btnPlus"));
        btnPlus->setGeometry(QRect(225, 240, 75, 40));
        btnPlus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(47, 80, 195, 255); \n"
" border: none; \n"
" color: #ffffff;\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(38, 151, 253);\n"
"}"));
        btnMinus = new Button(Form, "-");
        btnMinus->setObjectName(QString::fromUtf8("btnMinus"));
        btnMinus->setGeometry(QRect(225, 280, 75, 40));
        btnMinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(47, 80, 195, 255); \n"
" border: none; \n"
" color: #ffffff;\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(38, 151, 253);\n"
"}"));
        btnMultiplication = new Button(Form, "*");
        btnMultiplication->setObjectName(QString::fromUtf8("btnMultiplication"));
        btnMultiplication->setGeometry(QRect(225, 320, 75, 40));
        btnMultiplication->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(47, 80, 195, 255); \n"
" border: none; \n"
" color: #ffffff;\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(38, 151, 253);\n"
"}"));
        btnDivision = new Button(Form, "/");
        btnDivision->setObjectName(QString::fromUtf8("btnDivision"));
        btnDivision->setGeometry(QRect(225, 360, 75, 40));
        btnDivision->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: rgb(47, 80, 195, 255); \n"
" border: none; \n"
" color: #ffffff;\n"
" width: 75px; \n"
" height: 50px; \n"
" font-family: 'Arial'; \n"
" font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
" background-color: rgb(38, 151, 253);\n"
"}"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        inputScreen->setText(QApplication::translate("Form", "0", nullptr));
        btnSeven->setText(QApplication::translate("Form", "7", nullptr));
        btnFour->setText(QApplication::translate("Form", "4", nullptr));
        btnOne->setText(QApplication::translate("Form", "1", nullptr));
        btnDot->setText(QApplication::translate("Form", ".", nullptr));
        btnEight->setText(QApplication::translate("Form", "8", nullptr));
        btnSix->setText(QApplication::translate("Form", "6", nullptr));
        btnFive->setText(QApplication::translate("Form", "5", nullptr));
        btnNine->setText(QApplication::translate("Form", "9", nullptr));
        btnTwo->setText(QApplication::translate("Form", "2", nullptr));
        btnThree->setText(QApplication::translate("Form", "3", nullptr));
        btnZero->setText(QApplication::translate("Form", "0", nullptr));
        btnEqual->setText(QApplication::translate("Form", "=", nullptr));
        btnClear->setText(QString());
        btnPlus->setText(QApplication::translate("Form", "+", nullptr));
        btnMinus->setText(QApplication::translate("Form", "-", nullptr));
        btnMultiplication->setText(QApplication::translate("Form", "\303\227", nullptr));
        btnDivision->setText(QApplication::translate("Form", "\303\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
