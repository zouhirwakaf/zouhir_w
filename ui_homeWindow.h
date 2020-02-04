/********************************************************************************
** Form generated from reading UI file 'homeWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QFrame *line;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(false);
        MainWindow->resize(500, 600);
        MainWindow->setMaximumSize(QSize(16777215, 600));
        MainWindow->setStyleSheet(QLatin1String("font: 21pt \"Rockwell Condensed\";\n"
""));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 80, 191, 61));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(38);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QLatin1String("font: 38pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 170, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 90, 41, 41));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 30pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 70, 211, 71));
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("color: rgb(150, 24, 30);\n"
"font: 38pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 210, 51, 51));
        label_4->setPixmap(QPixmap(QString::fromUtf8("nought-01.png")));
        label_4->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(270, 210, 51, 51));
        label_6->setPixmap(QPixmap(QString::fromUtf8("cross-01.png")));
        label_6->setScaledContents(true);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(240, 200, 3, 61));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 390, 261, 61));
        pushButton->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"font: 18pt \"MS Shell Dlg 2\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 500, 39));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "homeWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "noughts ", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "crosses", Q_NULLPTR));
        label_4->setText(QString());
        label_6->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Start game", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
