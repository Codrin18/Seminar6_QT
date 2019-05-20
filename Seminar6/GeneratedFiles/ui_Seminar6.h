/********************************************************************************
** Form generated from reading UI file 'Seminar6.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEMINAR6_H
#define UI_SEMINAR6_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Seminar6Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Seminar6Class)
    {
        if (Seminar6Class->objectName().isEmpty())
            Seminar6Class->setObjectName(QStringLiteral("Seminar6Class"));
        Seminar6Class->resize(600, 400);
        menuBar = new QMenuBar(Seminar6Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Seminar6Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Seminar6Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Seminar6Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(Seminar6Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Seminar6Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Seminar6Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Seminar6Class->setStatusBar(statusBar);

        retranslateUi(Seminar6Class);

        QMetaObject::connectSlotsByName(Seminar6Class);
    } // setupUi

    void retranslateUi(QMainWindow *Seminar6Class)
    {
        Seminar6Class->setWindowTitle(QApplication::translate("Seminar6Class", "Seminar6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Seminar6Class: public Ui_Seminar6Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEMINAR6_H
