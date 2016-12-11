#ifndef INTERACTIVEOBJECT_H
#define INTERACTIVEOBJECT_H
#include<QPushButton>
#include<QLabel>
#include"dialogbox.h"

#include"enums.h"


class InteractiveObject:public QPushButton
{
protected:
    void hoverEnter(QHoverEvent* event);
    void hoverLeave(QHoverEvent* event);
public:
    Item ItemType;
    InteractiveObject(QWidget*,Item);
    QPixmap* itemPixmap;
    bool event(QEvent *event);
    QWidget* parent;
    QLabel* label;

};

#endif // INTERACTIVEOBJECT_H
