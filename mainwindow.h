#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QPushButton>
#include <QStringList>
#include <QCompleter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    int num1=0;
    int num2=0;
    int result=0;
    QString line;

    QStringList numbers;



    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int o=0;
private slots:
    void add();
    void sub();
    void mul(bool a);
    void dev(bool a);
    void point();
    void equal();
    void clear();
    void clearAll();
    void digit(QString);
    void calculation();



};



#endif // MAINWINDOW_H
