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
    int num=0;
    QString line;
    QPushButton *b=new QPushButton(this);

    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int o=0;
private slots:
    void add();
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
