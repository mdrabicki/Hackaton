#include "scene.h"

Scene::Scene()
{
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
    dialogBox->show();

}
