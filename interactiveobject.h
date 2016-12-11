#ifndef INTERACTIVEOBJECT_H
#define INTERACTIVEOBJECT_H
#include<QPushButton>
#include<QLabel>

class InteractiveObject:public QPushButton
{
    Q_ENUMS(Item)

protected:
    void hoverEnter(QHoverEvent* event);
    void hoverLeave(QHoverEvent* event);
public:
    enum Item{identificator,wrench,notes,body};
    InteractiveObject(QWidget*,Item);
    QPixmap* itemPixmap;
    bool event(QEvent *event);
    QWidget* parent;
    QLabel* label;

};

#endif // INTERACTIVEOBJECT_H
