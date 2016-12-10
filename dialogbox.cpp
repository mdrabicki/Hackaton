#include <QCoreApplication>
#include <QTime>
#include "dialogbox.h"
#include <QLabel>


DialogBox::DialogBox(QWidget *parent)
{

    this->setWindowFlags(Qt::FramelessWindowHint);
    textBox=new QPushButton(this);
    textBox->setGeometry(QRect(50,50,300,300));
    textBox->setText("TEJDBSJKDBKUJSDBKUSDUJ");
    textBox->show();
    label = new QLabel(this);

    QPixmap pixmap("E:\\Projekty\\QT\\Hackaton\\Test.png");
    label->setPixmap(pixmap);
    label->setGeometry(100,100,100,100);
    label->show();







}
