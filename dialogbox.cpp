#include <QCoreApplication>
#include <QTime>
#include "dialogbox.h"
#include <QLabel>


DialogBox::DialogBox(QWidget *parent)
{

 //   this->setWindowFlags(Qt::FramelessWindowHint);
 /*   textBox=new QPushButton(this);
    textBox->setGeometry(QRect(50,50,300,300));
    textBox->setText("TEJDBSJKDBKUJSDBKUSDUJ");
    textBox->show();
*/

    label = new QLabel(parent);
    QPixmap pixmap(":/portrets/dialogbox.png");
    label->setPixmap(pixmap);
    label->setGeometry(0,0,1366,768);
  //  label->setStyleSheet("background:transparent;");

    label->show();







}
