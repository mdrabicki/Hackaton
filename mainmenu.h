#ifndef MAINMENU_H
#define MAINMENU_H
#include<QPushButton>
#include<QVBoxLayout>
#include"scene.h"


class MainMenu:QWidget
{
    Q_OBJECT
public:
    MainMenu(QWidget *parent);
private:
    QVBoxLayout* layout;
    QPushButton* start;
    QPushButton* test;




};

#endif // MAINMENU_H
