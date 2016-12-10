#include "dialogbox.h"
#include <QLabel>
DialogBox::DialogBox(QWidget *parent)
{


 /*   textBox=new QPushButton(parent);
    textBox->setGeometry(QRect(50,50,300,300));*/

    label = new QLabel(this);

    QPixmap pixmap("E:\\Projekty\\QT\\Hackaton\\Test.jpg");
    label->setPixmap(pixmap);
     label->setGeometry(100,100,100,100);
    label->show();





}
