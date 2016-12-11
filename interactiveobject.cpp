#include "interactiveobject.h"

#include<QtWidgets>
InteractiveObject::InteractiveObject(QWidget* parent, Item itemType)
{
    this->setParent(parent);
    this->parent=parent;
    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);
    this->show();
    this->setStyleSheet("background:transparent;");
    connect(this,SIGNAL(released()),parent,SLOT(!!!));
    switch(itemType){
    case (Item::identificator):
            this->setGeometry(125,632,60,40);
            identificatorPixmap= new QPixmap(":/scenes/1/BG_1_identyfikator.png");
        break;
    case (Item::wrench):
            this->setGeometry(836,449,95,40);
            identificatorPixmap= new QPixmap(":/scenes/1/BG_1_klucz.png");
        break;
    case (Item::notes):
        this->setGeometry(1197,619,60,75);
        identificatorPixmap= new QPixmap(":/scenes/1/BG_1_notatki.png");
        break;
    case (Item::body):
        this->setGeometry(463,486,315,204);
        identificatorPixmap= new QPixmap(":/scenes/1/BG_1_trup.png");
        break;

    }

}
bool InteractiveObject::event(QEvent* event)
{
    switch(event->type())
    {
    case QEvent::HoverEnter:
        hoverEnter(static_cast<QHoverEvent*>(event));
        return true;
        break;
    case QEvent::HoverLeave:
        hoverLeave(static_cast<QHoverEvent*>(event));
        return true;
        break;
    default:
        break;
    }
    return QWidget::event(event);
}
void InteractiveObject::hoverEnter(QHoverEvent* event){
    label = new QLabel(parent);
    label->setGeometry(QRect(0,0,1366,768));
  //  identificatorPixmap = new QPixmap(":/scenes/1/BG_1_klucz.png");
    label->setPixmap(*identificatorPixmap);
    label->show();
}
void InteractiveObject::hoverLeave(QHoverEvent *event){
    label->hide();
}


