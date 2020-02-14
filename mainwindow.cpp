#include <QtWidgets>

#include "button.h"
#include "mainwindow.h"
#include<QGroupBox>
#include<QLine>
#include<QString>

int tour=0;

char sq[5][5];


QString players[3]={"","noughts","crosses"};
int nought=0;
int cross=0;
int player=1;

int start=0;
char win = '\0';


MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{



    for (int i = 0; i < NumDigitButtons; i++) {
        digitButtons[i] = createButton("", SLOT(digitClicked()));
    }

    Button *clearButton = createButton(tr("Back"), SLOT(clear()));
    Button *equalButton = createButton(tr("Start game"), SLOT(equalClicked()));

    QGridLayout *mainLayout = new QGridLayout;

     mainLayout->addWidget(creatGroup(),0,0,3,5);


     mainLayout->addWidget(equalButton, 6,4);
     mainLayout->addWidget(clearButton, 6,1);


         setLayout(mainLayout);


}


//kkkkkkkkkkkkkkkkkk
void MainWindow::digitClicked()
{



 Button *clickedButton = qobject_cast<Button *>(sender());


    if(clickedButton->text() == "" && start == 1 )


       {

        if(player==2)
        {
            clickedButton->setText("X");
clickedButton->setIcon(QIcon("C:/Users/User/Documents/zouhir/cross-01.png"));

   if(digitButtons[1]==clickedButton)
        sq[4][2] = 'X';
   else if(digitButtons[2]==clickedButton)
        sq[4][3] = 'X';
   else if(digitButtons[3]==clickedButton)
        sq[4][4] = 'X';
   else if(digitButtons[4]==clickedButton)
        sq[3][2] = 'X';
   else if(digitButtons[5]==clickedButton)
        sq[3][3] = 'X';
   else if(digitButtons[6]==clickedButton)
        sq[3][4] = 'X';
   else if(digitButtons[7]==clickedButton)
        sq[2][2] = 'X';
   else if(digitButtons[8]==clickedButton)
        sq[2][3] = 'X';
     else if(digitButtons[9]==clickedButton)
        sq[2][4] = 'X';

          checkWinner();

        }
        else
        {
            clickedButton->setText("O");

clickedButton->setIcon(QIcon("C:/Users/User/Documents/zouhir/nought-01.png"));

if(digitButtons[1]==clickedButton)
     sq[4][2] = 'O';
else if(digitButtons[2]==clickedButton)
     sq[4][3] = 'O';
else if(digitButtons[3]==clickedButton)
     sq[4][4] = 'O';
else if(digitButtons[4]==clickedButton)
     sq[3][2] = 'O';
else if(digitButtons[5]==clickedButton)
     sq[3][3] = 'O';
else if(digitButtons[6]==clickedButton)
     sq[3][4] = 'O';
else if(digitButtons[7]==clickedButton)
     sq[2][2] = 'O';
else if(digitButtons[8]==clickedButton)
     sq[2][3] = 'O';
  else if(digitButtons[9]==clickedButton)
     sq[2][4] = 'O';

         checkWinner();

        }

    }

 }






void MainWindow::equalClicked()
{


    player=2;

     win = '\0';

     tour=0;


     for(int i=2;i<5;i++)
         for(int j=2;j<5;j++)
             sq[i][j]={'\0'};

      for (int i = 1; i < 10; i++) {
     digitButtons[i]->setText("");
     digitButtons[i]->setIcon(QIcon(""));}

     start=1;

 digitButtons[0]->setText(players[1]+"'s Turn");


}



void MainWindow::clear()
{

this->close();
}



Button *MainWindow::createButton(const QString &text, const char *member)
{
    Button *button = new Button(text);
    connect(button, SIGNAL(clicked()), this, member);
    return button;
}

/*     */

QGroupBox *MainWindow::creatGroup()
{

  QGroupBox *groupBox = new QGroupBox(tr(""));



  QGridLayout *Glayot=new QGridLayout;



  for (int i = 1; i < 10; i++) {
      int row = ((9 - i) / 3) + 2;
      int column = ((i - 1) % 3) + 1;
       Glayot->addWidget(digitButtons[i], row, 1+ column);
  }
  Glayot->addWidget(digitButtons[0], 1,3);

Glayot->addWidget(digitButtons[10], 0,1);
Glayot->addWidget(digitButtons[11], 0,6);
digitButtons[10]->setText("Noughts score:");
digitButtons[11]->setText("Crosses score:");

 groupBox->setLayout(Glayot);

 return groupBox;

}


void MainWindow::checkWinner()
{

    win='\0';
    for(int i=2;i<5;i++)
    {
        if(sq[i][2] == sq[i][3] && sq[i][3]==sq[i][4] && sq[i][3] != '\0')
        {
            win = sq[i][3];
            break;
        }
        if(sq[2][i] == sq[3][i] && sq[3][i]==sq[4][i] && sq[3][i] != '\0')
        {
            win = sq[3][i];
            break;
        }
    }
    if(sq[2][2] == sq[3][3] && sq[3][3]==sq[4][4] && sq[3][3] != '\0')
        win = sq[3][3];
    if(sq[2][4] == sq[3][3] && sq[3][3]==sq[4][2] && sq[3][3] != '\0')
        win = sq[3][3];

    if(win=='X')
    {

        start=0;
        cross++;



  digitButtons[0]->setText(players[2]+" Wins");
 digitButtons[11]->setText("Crosses score: ");

digitButtons[11]->setText( digitButtons[11]->text()+ QString::number(cross));


        return;
    }
    if(win=='O')
    {
        start=0;
        nought++;


digitButtons[10]->setText("Noughts score: ");

digitButtons[0]->setText(players[1]+" Wins");
digitButtons[10]->setText( digitButtons[10]->text()+ QString::number(nought));


        return;
    }
    tour++;
    if(tour == 9)
    {
digitButtons[0]->setText("Game draw");
        tour=0;
        start=0;

        return;
    }

    if(player==2)
        player=1;
    else
        player=2;
digitButtons[0]->setText(players[player]+"'s Turn");

}

