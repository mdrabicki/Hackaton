#include "interactiveobject.h"
#include<QLabel>
InteractiveObject::InteractiveObject(Item itemType)
{
    switch(itemType){
    case (Item::identificator):
            QLabel* label = new QLabel(this);
            label->setGeometry(QRect(0,0,1366,768));
            QPixmap identificatorPixmap(":/scenes/1/BG_1_identyfikator.png");
            label->setPixmap(identificatorPixmap);
        break;
    }






}

void InteractiveObject::identificatorEnterEvent(QEvent* e){
    Q_EMIT identyficatorHovered();

    QWidget::enterEvent(e);
}
