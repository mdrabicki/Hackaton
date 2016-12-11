#include "scene.h"
#include <QTime>
#include<QCoreApplication>
#include"interactiveobject.h"

Scene::Scene()
{




    test= new QPushButton();
    test->setText("aadgbfguia");
    layout=new QVBoxLayout(this);
    layout->addWidget(test);

    InteractiveObject* identificator = new InteractiveObject(this,InteractiveObject::Item::identificator);
    InteractiveObject* wrench = new InteractiveObject(this,InteractiveObject::Item::wrench);
    InteractiveObject* body = new InteractiveObject(this,InteractiveObject::Item::body);
    InteractiveObject* notes = new InteractiveObject(this,InteractiveObject::Item::notes);



    QString string("abc");
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
    dialogBox->setStyleSheet("background:transparent;");
 //   dialogBox->move(0,0);
//    dialogBox->show();
/*    QTime sleep = QTime::currentTime().addSecs(3);

    while(QTime::currentTime()<sleep){
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
  //  dialogBox->hide();*/
}

/*void Scene::identyficatorHover(){

}*/
