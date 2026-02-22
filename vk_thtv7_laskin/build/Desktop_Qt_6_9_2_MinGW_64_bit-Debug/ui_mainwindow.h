/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button0;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QPushButton *addButton;
    QPushButton *subButton;
    QPushButton *mulButton;
    QPushButton *divButton;
    QWidget *widget2;
    QGridLayout *gridLayout_3;
    QLineEdit *num1Edit;
    QLineEdit *num2Edit;
    QLineEdit *resultEdit;
    QWidget *widget3;
    QGridLayout *gridLayout_4;
    QPushButton *clearButton;
    QPushButton *enterButton;
    QMenuBar *menubar;
    QMenu *menuCalculator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(519, 362);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 60, 381, 201));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Button7 = new QPushButton(widget);
        Button7->setObjectName("Button7");

        gridLayout->addWidget(Button7, 0, 0, 1, 1);

        Button8 = new QPushButton(widget);
        Button8->setObjectName("Button8");

        gridLayout->addWidget(Button8, 0, 1, 1, 1);

        Button9 = new QPushButton(widget);
        Button9->setObjectName("Button9");

        gridLayout->addWidget(Button9, 0, 2, 1, 1);

        Button4 = new QPushButton(widget);
        Button4->setObjectName("Button4");

        gridLayout->addWidget(Button4, 1, 0, 1, 1);

        Button5 = new QPushButton(widget);
        Button5->setObjectName("Button5");

        gridLayout->addWidget(Button5, 1, 1, 1, 1);

        Button6 = new QPushButton(widget);
        Button6->setObjectName("Button6");

        gridLayout->addWidget(Button6, 1, 2, 1, 1);

        Button1 = new QPushButton(widget);
        Button1->setObjectName("Button1");

        gridLayout->addWidget(Button1, 2, 0, 1, 1);

        Button2 = new QPushButton(widget);
        Button2->setObjectName("Button2");

        gridLayout->addWidget(Button2, 2, 1, 1, 1);

        Button3 = new QPushButton(widget);
        Button3->setObjectName("Button3");

        gridLayout->addWidget(Button3, 2, 2, 1, 1);

        Button0 = new QPushButton(widget);
        Button0->setObjectName("Button0");

        gridLayout->addWidget(Button0, 3, 1, 1, 1);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(410, 60, 91, 201));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(widget1);
        addButton->setObjectName("addButton");

        gridLayout_2->addWidget(addButton, 0, 0, 1, 1);

        subButton = new QPushButton(widget1);
        subButton->setObjectName("subButton");

        gridLayout_2->addWidget(subButton, 1, 0, 1, 1);

        mulButton = new QPushButton(widget1);
        mulButton->setObjectName("mulButton");

        gridLayout_2->addWidget(mulButton, 2, 0, 1, 1);

        divButton = new QPushButton(widget1);
        divButton->setObjectName("divButton");

        gridLayout_2->addWidget(divButton, 3, 0, 1, 1);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(10, 10, 331, 30));
        gridLayout_3 = new QGridLayout(widget2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        num1Edit = new QLineEdit(widget2);
        num1Edit->setObjectName("num1Edit");

        gridLayout_3->addWidget(num1Edit, 0, 0, 1, 1);

        num2Edit = new QLineEdit(widget2);
        num2Edit->setObjectName("num2Edit");

        gridLayout_3->addWidget(num2Edit, 0, 1, 1, 1);

        resultEdit = new QLineEdit(widget2);
        resultEdit->setObjectName("resultEdit");

        gridLayout_3->addWidget(resultEdit, 0, 2, 1, 1);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(170, 280, 181, 31));
        gridLayout_4 = new QGridLayout(widget3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        clearButton = new QPushButton(widget3);
        clearButton->setObjectName("clearButton");

        gridLayout_4->addWidget(clearButton, 0, 0, 1, 1);

        enterButton = new QPushButton(widget3);
        enterButton->setObjectName("enterButton");

        gridLayout_4->addWidget(enterButton, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 519, 25));
        menuCalculator = new QMenu(menubar);
        menuCalculator->setObjectName("menuCalculator");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCalculator->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        subButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        mulButton->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        divButton->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        enterButton->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        menuCalculator->setTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
