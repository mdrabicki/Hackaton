#include <QCoreApplication>
#include <QTime>
#include "dialogbox.h"
#include <QLabel>


DialogBox::DialogBox(QWidget *parent)
{





    this->setParent(parent);
    QPixmap pixmap(":/portrets/dialogbox.png");
    label=new QLabel(this);
    label->setPixmap(pixmap);
    this->setGeometry(0,0,1366,768);
    this->setStyleSheet("background:transparent;");
    textBrowser=new QTextBrowser(this);
    textBrowser->setGeometry(QRect(50,50,300,300));
    textBrowser->setText("TEJDBSJKDBKUJSDBKUSDUJ");
 //   label->mousePressEvent();
    this->show();
}
void DialogBox::mousePressEvent(QMouseEvent* e){
    this->hide();
}
