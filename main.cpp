#include <QApplication>

 #include "mainwindow.h"

 int main(int argc, char *argv[])
 {
     QApplication app(argc, argv);
     MainWindow calc;

calc.resize(500,900);

     calc.show();
     return app.exec();
 }
