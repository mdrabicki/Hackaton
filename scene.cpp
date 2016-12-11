#include "scene.h"
#include <QTime>
#include<QCoreApplication>
#include"interactiveobject.h"


Scene::Scene(int nr)
{
    createIteams(nr);



}
void Scene::createIteams(int nr){


    switch (nr) {
    case 1:
        identificator = new InteractiveObject(this,Item::identificator,1);
        wrench = new InteractiveObject(this,Item::wrench,1);
        body = new InteractiveObject(this,Item::body,1);
        notes = new InteractiveObject(this,Item::notes,1);
        monitor = new InteractiveObject(this, Item::monitor,1 );
        computer = new InteractiveObject(this,Item::computer,1);
        dialogBox=new DialogBox(this,Item::onentry);
        break;
    case 2:
        drawings = new InteractiveObject(this,Item::drawings,2);
        ekchbert = new InteractiveObject(this,Item::ekchbert,2);
        letter = new InteractiveObject(this,Item::letter,2);
        machine = new InteractiveObject(this,Item::machine,2);
        toolbox = new InteractiveObject(this, Item::toolbox,2);
        dialogBox=new DialogBox(this,Item::onentry2);
        break;
    case 3:
        agness= new InteractiveObject(this,Item::agness,3);
        craddle= new InteractiveObject(this,Item::vaccination,3);
        vaccination= new InteractiveObject(this,Item::vaccination,3);
        order= new InteractiveObject(this,Item::order,3);
        dialogBox= new DialogBox(this,Item::onentry3);
        break;
    case 4:
        desk= new InteractiveObject(this,Item::desk,4);
        gun= new InteractiveObject(this,Item::gun,4);
        pills= new InteractiveObject(this,Item::pills,4);
        papers= new InteractiveObject(this,Item::papers,4);
        dialogBox= new DialogBox(this,Item::onentry3);
        break;


    default:
        break;
    }

}

void Scene::exitClick(){
    qApp->exit();
}

void Scene::openNewDialogBox(){

    InteractiveObject* obj =(InteractiveObject*)sender();

    dialogBox=new DialogBox(this,obj->ItemType);


    }

void Scene::newDialogBox(){

}


