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
    Scene();
    QPushButton* test;
    QVBoxLayout* layout;
    QPushButton* openDialogBox;
    DialogBox* dialogBox;
    void newDialogBox();



private slots:
    void exitClick();
public slots:
    void openNewDialogBox();




};

#endif // SCENE_H
