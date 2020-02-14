#ifndef MAINWINOW_H
  #define MAINWINOW_H

  #include <QWidget>
#include<QLabel>
#include<QGroupBox>



  class Button;

  class MainWindow : public QWidget
  {
      Q_OBJECT

  public:
      MainWindow(QWidget *parent = 0);
void checkWinner();


  private slots:
      void digitClicked();


      void equalClicked();



      void clear();


  private:

      Button *createButton(const QString &text, const char *member);
      QGroupBox *creatGroup();


      enum { NumDigitButtons = 12 };
      Button *digitButtons[NumDigitButtons];
  };

  #endif
