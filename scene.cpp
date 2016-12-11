#include "scene.h"
#include <QTime>
#include<QCoreApplication>
#include"interactiveobject.h"


Scene::Scene()
{




    test= new QPushButton();
    test->setText("ąćęłźaadgbfguia");
    layout=new QVBoxLayout(this);
    layout->addWidget(test);

    InteractiveObject* identificator = new InteractiveObject(this,Item::identificator);
    InteractiveObject* wrench = new InteractiveObject(this,Item::wrench);
    InteractiveObject* body = new InteractiveObject(this,Item::body);
    InteractiveObject* notes = new InteractiveObject(this,Item::notes);



    QString string("abc");
    openDialogBox=new QPushButton();
    openDialogBox->setText("Open Dialog Box");
    layout->addWidget(openDialogBox);
    layout->setAlignment(Qt::AlignHCenter);
 //   connect(openDialogBox, SIGNAL(released()),this,SLOT(openNewDialogBox()));
    connect(test,SIGNAL(released()),this,SLOT(exitClick()));
}

void Scene::exitClick(){
    qApp->exit();
}

void Scene::openNewDialogBox(){

    InteractiveObject* obj =(InteractiveObject*)sender();





    dialogBox=new DialogBox(this,obj->ItemType);
 //   dialogBox->show();

/*    QTime sleep = QTime::currentTime().addSecs(3);

    while(QTime::currentTime()<sleep){
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }*/

    }

void Scene::newDialogBox(){

}


