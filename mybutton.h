#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <QPushButton>

class mybutton : public QPushButton
{ Q_OBJECT
public:
    explicit mybutton(QWidget *parent = 0);
    ~mybutton();
private:
    void mousePressEvent(QMouseEvent *event);
signals:
    void clicked(QString);

};

#endif // MYBUTTON_H
