#include "scene.h"
#include <QTime>
#include<QCoreApplication>
#include"interactiveobject.h"


Scene::Scene(int nr)
{
    void createIteams(int nr);


}
void Scene::createIteams(int nr){
    switch (nr) {
    case 1:
        InteractiveObject* identificator = new InteractiveObject(this,Item::identificator,1);
        InteractiveObject* wrench = new InteractiveObject(this,Item::wrench,1);
        InteractiveObject* body = new InteractiveObject(this,Item::body,1);
        InteractiveObject* notes = new InteractiveObject(this,Item::notes,1);
        InteractiveObject* monitor = new InteractiveObject(this, Item::monitor,1 );
        InteractiveObject* computer = new InteractiveObject(this,Item::computer,1);
        dialogBox=new DialogBox(this,Item::onentry,1);
        break;
    case 2:
        InteractiveObject* drawings = new InteractiveObject(this,Item::drawings,2);
        InteractiveObject* ekchbert = new InteractiveObject(this,Item::ekchbert,2);
        InteractiveObject* letter = new InteractiveObject(this,Item::letter,2);
        InteractiveObject* machine = new InteractiveObject(this,Item::machine,2);
        InteractiveObject* toolbox = new InteractiveObject(this, Item::toolbox,2);
        dialogBox=new DialogBox(this,Item2::onentry2,2);
    default:
        break;
    }
}

void Scene::exitClick(){
    qApp->exit();
}

void Scene::openNewDialogBox(){

    InteractiveObject* obj =(InteractiveObject*)sender();

    dialogBox=new DialogBox(this,obj->ItemTypen,nr);


    }

void Scene::newDialogBox(){

}


