#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    int result=0;
    int num1;
    int num2;
    QString line;
    QString label;
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int o=0;
private slots:
    void add(int a);
    void sub();
    void mul();
    void dev();
    void point();
    void equal();
    void clear();
    void clearAll();
    void digit(QString);


};



#endif // MAINWINDOW_H
