#include "interactiveobject.h"

#include<QtWidgets>
InteractiveObject::InteractiveObject(QWidget* parent, Item itemType)
{

    this->setParent(parent);
    this->parent=parent;
    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);
    this->setStyleSheet("background:transparent;");

    switch(itemType){
    case (Item::identificator):
            this->setGeometry(125,632,60,40);
            itemPixmap= new QPixmap(":/scenes/1/BG_1_identyfikator.png");
        break;
    case (Item::wrench):
            this->setGeometry(836,449,95,40);
            itemPixmap= new QPixmap(":/scenes/1/BG_1_klucz.png");
        break;
    case (Item::notes):
        this->setGeometry(1197,619,60,75);
        itemPixmap= new QPixmap(":/scenes/1/BG_1_notatki.png");
        break;
    case (Item::body):
        this->setGeometry(463,486,315,204);
        itemPixmap= new QPixmap(":/scenes/1/BG_1_trup.png");
        break;

    }
    label = new QLabel(parent);
    connect(this,SIGNAL(pressed()),parent,SLOT(openNewDialogBox()));




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
  label->setPixmap(*itemPixmap);
  label->setGeometry(QRect(0,0,1366,768));
 // label->show();

}

void InteractiveObject::hoverLeave(QHoverEvent *event){
    label->hide();
}

