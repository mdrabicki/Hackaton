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


private slots:
    void exitClick();
public slots:
    void openNewDialogBox();




};

#endif // SCENE_H
