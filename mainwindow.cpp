#include "mainwindow.h"
#include "ui_mainwindow.h"


int tour=0;

char sq[3][3];

QString No;
QString players[3]={"","noughts","crosses"};
int nought=0;
int cross=0;
int player=1;

int start=0;
char win = '\0';

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Noughts and Crosses");


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::checkWinner()
{
    win='\0';
    for(int i=0;i<3;i++)
    {
        if(sq[i][0] == sq[i][1] && sq[i][1]==sq[i][2] && sq[i][1] != '\0')
        {
            win = sq[i][1];
            break;
        }
        if(sq[0][i] == sq[1][i] && sq[1][i]==sq[2][i] && sq[1][i] != '\0')
        {
            win = sq[1][i];
            break;
        }
    }
    if(sq[0][0] == sq[1][1] && sq[1][1]==sq[2][2] && sq[1][1] != '\0')
        win = sq[1][1];
    if(sq[0][2] == sq[1][1] && sq[1][1]==sq[2][0] && sq[1][1] != '\0')
        win = sq[1][1];

    if(win=='X')
    {

        start=0;
        cross++;

        ui->label_4->setText(players[2]+" Wins");
           ui->label_2->setText("Crosses score: ");

        ui->label_2->setText( ui->label_2->text()+ QString::number(cross));


        return;
    }
    if(win=='O')
    {
        start=0;
        nought++;

        ui->label_4->setText(players[1]+" Wins");
        ui->label->setText("Noughts score: ");


          ui->label->setText( ui->label->text()+ QString::number(nought));


        return;
    }
    tour++;
    if(tour == 9)
    {
        ui->label_4->setText("Game draw");
        tour=0;
        start=0;

        return;
    }

    if(player==2)
        player=1;
    else
        player=2;
    ui->label_4->setText(players[player]+"'s Turn");

}

void MainWindow::on_toolButton_clicked()
{
    if(ui->toolButton->text() == "" && start == 1 )
     // if( ui->toolButton->icon().isNull() )
    {
        if(player==2)
        {
            ui->toolButton->setText("X");
ui->toolButton->setIcon(QIcon("C:/Users/User/Documents/zouhir/cross-01.png"));

            sq[0][0] = 'X';
            checkWinner();
        }
        else
        {
            ui->toolButton->setText("O");

ui->toolButton->setIcon(QIcon("C:/Users/User/Documents/zouhir/nought-01.png"));

            sq[0][0] = 'O';
            checkWinner();
        }
    }
}

void MainWindow::on_toolButton_2_clicked()
{
    if(ui->toolButton_2->text() == "" && start == 1)
//           if( ui->toolButton->icon().isNull() )
    {
        if(player==2)
        {
            ui->toolButton_2->setText("X");
            ui->toolButton_2->setIcon(QIcon("C:/Users/User/Documents/zouhir/cross-01.png"));
            sq[0][1] = 'X';
            checkWinner();
        }
        else
        {
            ui->toolButton_2->setText("O");
            ui->toolButton_2->setIcon(QIcon("C:/Users/User/Documents/zouhir/nought-01.png"));
            sq[0][1] = 'O';
            checkWinner();
        }
    }
}

void MainWindow::on_toolButton_3_clicked()
{
    if(ui->toolButton_3->text() == "" && start == 1)
    {
        if(player==2)
        {
            ui->toolButton_3->setText("X");
            ui->toolButton_3->setIcon(QIcon("C:/Users/User/Documents/zouhir/cross-01.png"));
            sq[0][2] = 'X';
            checkWinner();
        }
        else
        {
            ui->toolButton_3->setText("O");
            ui->toolButton_3->setIcon(QIcon("C:/Users/User/Documents/zouhir/nought-01.png"));
            sq[0][2] = 'O';
            checkWinner();
        }
    }
}

void MainWindow::on_toolButton_4_clicked()
{
    if(ui->toolButton_4->text() == "" && start == 1)
    {
        if(player==2)
        {
            ui->toolButton_4->setText("X");
            ui->toolButton_4->setIcon(QIcon("C:/Users/User/Documents/zouhir/cross-01.png"));
            sq[1][0] = 'X';
            checkWinner();
        }
        else
        {
            ui->toolButton_4->setText("O");
             ui->toolButton_4->setIcon(QIcon("C:/Users/User/Documents/zouhir/nought-01.png"));
            sq[1][0] = 'O';
            checkWinner();
        }
    }
}

void MainWindow::on_toolButton_5_clicked()
{
    if(ui->toolButton_5->text() == "" && start == 1)
    {
        if(player==2)
        {
            ui->toolButton_5->setText("X");
            ui->toolButton_5->setIcon(QIcon("C:/Users/User/Documents/zouhir/cross-01.png"));
            sq[1][1] = 'X';
            checkWinner();
        }
        else
        {
            ui->toolButton_5->setText("O");
             ui->toolButton_5->setIcon(QIcon("C:/Users/User/Documents/zouhir/nought-01.png"));
            sq[1][1] = 'O';
            checkWinner();
        }
    }
}

void MainWindow::on_toolButton_6_clicked()
{
    if(ui->toolButton_6->text() == "" && start == 1)
    {
        if(player==2)
        {
            ui->toolButton_6->setText("X");
            ui->toolButton_6->setIcon(QIcon("C:/Users/User/Documents/zouhir/cross-01.png"));
            sq[1][2] = 'X';
            checkWinner();
        }
        else
        {
            ui->toolButton_6->setText("O");
             ui->toolButton_6->setIcon(QIcon("C:/Users/User/Documents/zouhir/nought-01.png"));
            sq[1][2] = 'O';
            checkWinner();
        }
    }
}

void MainWindow::on_toolButton_7_clicked()
{
    if(ui->toolButton_7->text() == "" && start == 1)
    {
        if(player==2)
        {
            ui->toolButton_7->setText("X");
            ui->toolButton_7->setIcon(QIcon("C:/Users/User/Documents/zouhir/cross-01.png"));
            sq[2][0] = 'X';
            checkWinner();
        }
        else
        {
            ui->toolButton_7->setText("O");
             ui->toolButton_7->setIcon(QIcon("C:/Users/User/Documents/zouhir/nought-01.png"));
            sq[2][0] = 'O';
            checkWinner();
        }
    }
}

void MainWindow::on_toolButton_8_clicked()
{
    if(ui->toolButton_8->text() == "" && start == 1)
    {
        if(player==2)
        {
            ui->toolButton_8->setText("X");
            ui->toolButton_8->setIcon(QIcon("C:/Users/User/Documents/zouhir/cross-01.png"));
            sq[2][1] = 'X';
            checkWinner();
        }
        else
        {
            ui->toolButton_8->setText("O");
             ui->toolButton_8->setIcon(QIcon("C:/Users/User/Documents/zouhir/nought-01.png"));
            sq[2][1] = 'O';
            checkWinner();
        }
    }
}

void MainWindow::on_toolButton_9_clicked()
{
    if(ui->toolButton_9->text() == "" && start == 1)
    {
        if(player==2)
        {
            ui->toolButton_9->setText("X");
            ui->toolButton_9->setIcon(QIcon("C:/Users/User/Documents/zouhir/cross-01.png"));
            sq[2][2] = 'X';
            checkWinner();
        }
        else
        {
            ui->toolButton_9->setText("O");
             ui->toolButton_9->setIcon(QIcon("C:/Users/User/Documents/zouhir/nought-01.png"));
            sq[2][2] = 'O';
            checkWinner();
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
   player=2;

    win = '\0';

    tour=0;


    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            sq[i][j]={'\0'};
    ui->toolButton->setText("");
    ui->toolButton->setIcon(QIcon(""));
    ui->toolButton_2->setText("");
    ui->toolButton_2->setIcon(QIcon(""));
    ui->toolButton_3->setText("");
    ui->toolButton_3->setIcon(QIcon(""));
    ui->toolButton_4->setText("");
     ui->toolButton_4->setIcon(QIcon(""));
    ui->toolButton_5->setText("");
     ui->toolButton_5->setIcon(QIcon(""));
    ui->toolButton_6->setText("");
     ui->toolButton_6->setIcon(QIcon(""));
    ui->toolButton_7->setText("");
    ui->toolButton_7->setIcon(QIcon(""));
    ui->toolButton_8->setText("");
    ui->toolButton_8->setIcon(QIcon(""));
    ui->toolButton_9->setText("");
    ui->toolButton_9->setIcon(QIcon(""));
//   player=1;
    start=1;
     ui->label_4->setText(players[2]+"'s Turn");

}

void MainWindow::on_pushButton_2_clicked()
{

this->close();
}



