#include "mainmenu.h"

MainMenu::MainMenu(QWidget *parent)
{
    layout=new QVBoxLayout(this);


    start = new QPushButton(this);

    layout->addWidget(start);
    layout->setAlignment(Qt::AlignHCenter);

    connect(start,SIGNAL(released()),parent,SLOT(startClick()));



}

