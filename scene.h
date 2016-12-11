#ifndef SCENE_H
#define SCENE_H

#include <QObject>
#include <QWidget>
#include<QWidget>
#include<QPushButton>
#include<QLayout>
#include<QVBoxLayout>
#include<QCoreApplication>
#include"dialogbox.h"


class Scene:public QWidget
{
    Q_OBJECT

public:
    Scene(int nr);
    QPushButton* openDialogBox;
    DialogBox* dialogBox;
    void newDialogBox();
    void createIteams(int nr);
private:
    InteractiveObject* identificator;
    InteractiveObject* wrench;
    InteractiveObject* body;
            InteractiveObject* notes;
            InteractiveObject* monitor;
            InteractiveObject* computer ;
            InteractiveObject* drawings;
            InteractiveObject* ekchbert;
            InteractiveObject* letter;
            InteractiveObject* machine;
            InteractiveObject* toolbox;

           InteractiveObject* agness;
           InteractiveObject* craddle;
           InteractiveObject* vaccination;
           InteractiveObject* order;

           InteractiveObject* desk;
           InteractiveObject* gun;
           InteractiveObject* pills;
           InteractiveObject* papers;
           InteractiveObject* identificator2;

private slots:
    void exitClick();
public slots:
    void openNewDialogBox();




};

#endif // SCENE_H
