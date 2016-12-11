#ifndef INTERACTIVEOBJECT_H
#define INTERACTIVEOBJECT_H
#include<QPushButton>
#include<QLabel>
#include"dialogbox.h"
#include"mainwindow.h"
#include"enums.h"

class InteractiveObject:public QPushButton
{
protected:
    void hoverEnter(QHoverEvent* event);
    void hoverLeave(QHoverEvent* event);
public:
    Item ItemType;
    InteractiveObject(QWidget*,Item,int);
    InteractiveObject(QWidget* parent,Item item,int nr,MainWindow* pointer);
    MainWindow* pointer;
    QPixmap* itemPixmap;
    void createHovers(int nr,Item);
//    bool event(QEvent *event);
    QWidget* parent;
    QLabel* label;
private:


};

#endif // INTERACTIVEOBJECT_H
