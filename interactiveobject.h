#ifndef INTERACTIVEOBJECT_H
#define INTERACTIVEOBJECT_H
#include<QPushButton>

class InteractiveObject:QPushButton
{
    Q_ENUMS(Item)
public:
    enum Item{identificator};
    InteractiveObject(Item);


};

#endif // INTERACTIVEOBJECT_H
