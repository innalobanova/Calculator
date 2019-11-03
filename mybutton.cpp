#include "mybutton.h"

mybutton::mybutton(QWidget *parent) :
    QPushButton (parent)
{

}

mybutton::~mybutton()
{

}
void mybutton::mousePressEvent(QMouseEvent *event)
{
    emit clicked(text());
}

