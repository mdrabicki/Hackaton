#include "scene.h"
#include <QTime>
#include<QCoreApplication>

Scene::Scene()
{

    QPixmap background(":/scenes/1/BG_1.png");
    QPalette palette;
    palette.setBrush(QPalette::Background,background);
    this->setPalette(palette);



    test= new QPushButton();
    test->setText("aadgbfguia");
    layout=new QVBoxLayout(this);
    layout->addWidget(test);

    openDialogBox=new QPushButton();
    openDialogBox->setText("Open Dialog Box");
    layout->addWidget(openDialogBox);
    layout->setAlignment(Qt::AlignHCenter);
    connect(openDialogBox, SIGNAL(released()),this,SLOT(openNewDialogBox()));
    connect(test,SIGNAL(released()),this,SLOT(exitClick()));
}

void Scene::exitClick(){
    qApp->exit();
}

void Scene::openNewDialogBox(){
    dialogBox=new DialogBox(this);
    dialogBox->move(0,0);
    dialogBox->show();
    QTime sleep = QTime::currentTime().addSecs(3);

    while(QTime::currentTime()<sleep){
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
    dialogBox->hide();
}
