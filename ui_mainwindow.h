/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QTableWidget *tableWidget;
    QFrame *line_5;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(500, 900);
        MainWindow->setMinimumSize(QSize(0, 383));
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(74, 74, 74);\n"
"color: rgb(253, 253, 253);\n"
"\n"
""));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(99, 239, 61, 61));
        toolButton_2 = new QToolButton(centralWidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(220, 240, 61, 61));
        toolButton_3 = new QToolButton(centralWidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(330, 239, 61, 61));
        toolButton_4 = new QToolButton(centralWidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setGeometry(QRect(100, 350, 61, 61));
        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(220, 350, 61, 61));
        toolButton_6 = new QToolButton(centralWidget);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setGeometry(QRect(330, 350, 61, 61));
        toolButton_7 = new QToolButton(centralWidget);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        toolButton_7->setGeometry(QRect(99, 460, 61, 61));
        toolButton_8 = new QToolButton(centralWidget);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        toolButton_8->setGeometry(QRect(220, 460, 61, 61));
        toolButton_9 = new QToolButton(centralWidget);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        toolButton_9->setGeometry(QRect(330, 460, 61, 61));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 140, 421, 71));
        QFont font;
        font.setFamily(QStringLiteral("Rockwell Condensed"));
        font.setPointSize(21);
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAutoFillBackground(false);
        label_4->setMargin(0);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 630, 111, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Rockwell Condensed"));
        font1.setPointSize(18);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
""));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 630, 111, 61));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 0, 0);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 50, 161, 41));
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(300, 50, 151, 41));
        label_2->setFont(font);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(290, 230, 31, 291));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(180, 230, 20, 291));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(80, 320, 331, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(80, 430, 331, 20));
        line_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 20, 441, 571));
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(30, 90, 441, 20));
        line_5->setStyleSheet(QStringLiteral("color: rgb(248, 248, 248);"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        tableWidget->raise();
        toolButton->raise();
        toolButton_2->raise();
        toolButton_3->raise();
        toolButton_4->raise();
        toolButton_5->raise();
        toolButton_6->raise();
        toolButton_7->raise();
        toolButton_8->raise();
        toolButton_9->raise();
        label_4->raise();
        pushButton->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        line->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_5->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
        toolButton_5->setText(QString());
        toolButton_6->setText(QString());
        toolButton_7->setText(QString());
        toolButton_8->setText(QString());
        toolButton_9->setText(QString());
        label_4->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "New game", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Noughts score: ", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Crosses score: ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
