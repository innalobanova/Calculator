#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->B0,SIGNAL(clicked(QString)),this,SLOT(digit(QString)));
    connect(ui->B1,SIGNAL(clicked(QString)),this,SLOT(digit(QString)));
    connect(ui->B2,SIGNAL(clicked(QString)),this,SLOT(digit(QString)));
    connect(ui->B3,SIGNAL(clicked(QString)),this,SLOT(digit(QString)));
    connect(ui->B4,SIGNAL(clicked(QString)),this,SLOT(digit(QString)));
    connect(ui->B5,SIGNAL(clicked(QString)),this,SLOT(digit(QString)));
    connect(ui->B6,SIGNAL(clicked(QString)),this,SLOT(digit(QString)));
    connect(ui->B7,SIGNAL(clicked(QString)),this,SLOT(digit(QString)));
    connect(ui->B8,SIGNAL(clicked(QString)),this,SLOT(digit(QString)));
    connect(ui->B9,SIGNAL(clicked(QString)),this,SLOT(digit(QString)));
    connect(ui->BPLUS,SIGNAL(clicked(bool)),this, SLOT(add(int 0)));
    connect(ui->BDEVIS,SIGNAL(clicked(bool)),this, SLOT(dev()));
    connect(ui->BMULT,SIGNAL(clicked(bool)),this, SLOT(mul()));
    connect(ui->BMINUS,SIGNAL(clicked(bool)),this, SLOT(sub()));
    connect(ui->BEGUAL, SIGNAL(clicked(bool)),this,SLOT(equal()));





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::add(int a)
{if (a==0)
  { num1 = line.toInt();
 label.append(line);
 label.append("+");
 ui->label->setText(label);
line.clear();
ui->lineEdit->setText(line);
o=1;}
  else {num2 = line.toInt();
        label.append(line);
        ui->label->setText(label);
       line.clear();
       ui->lineEdit->setText(line);
       result=num1+num2;
       o=0;}
}

void MainWindow::sub()
{//num-=line.toInt();
 label.append(line);
 label.append("-");
 ui->label->setText(label);
  line.clear();
 ui->lineEdit->setText(line);
  o=2;

}

void MainWindow::mul()
{
//    num*=line.toInt();
    line.clear();
    ui->lineEdit->setText(line);
    o=3;
}

void MainWindow::dev()
{//num/=line.toInt();
    line.clear();
    ui->lineEdit->setText(line);
    o=4;

}

void MainWindow::point()
{

}

void MainWindow::equal()
{switch (o) {
    case 1: {add(1);break;}
    case 2: {sub();break;}
    case 3: {mul();break;}
    case 4: {dev();break;}
    default: { break;}
    }
    label.append("=");
    label.append(QString("%1").arg(result));
    ui->label->setText(label);
    //ui->lineEdit->setText();
    line.clear();


}

void MainWindow::clear()
{

}

void MainWindow::clearAll()
{

}

void MainWindow::digit(QString p)
{line.append(p);
 ui->lineEdit->setText(line);

}

