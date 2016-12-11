#include "interactiveobject.h"

#include<QtWidgets>
InteractiveObject::InteractiveObject(QWidget* parent, Item itemType,int nr)
{
    this->ItemType=itemType;
    this->setParent(parent);
    this->parent=parent;
    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);
    this->setStyleSheet("background:transparent;");

    createHovers(nr,itemType);





}

void InteractiveObject:: createHovers(int nr,Item itemType){
    switch(ItemType){
    case (Item::identificator):
            this->setGeometry(125,632,60,40);
            itemPixmap= new QPixmap(":/scenes/1/identificator.png");

        break;
    case (Item::wrench):
            this->setGeometry(836,449,95,40);
            itemPixmap= new QPixmap(":/scenes/1/wrench.png");

        break;
    case (Item::body):
        this->setGeometry(463,486,315,204);
        itemPixmap= new QPixmap(":/scenes/1/body.png");

        break;
    case (Item::notes):
        this->setGeometry(1197,619,60,75);
        itemPixmap= new QPixmap(":/scenes/1/notes.png");
        break;
    case (Item::monitor):
        this->setGeometry(726,260,392,188);
        itemPixmap=new QPixmap(":/scenes/1/monitor.png");
        break;
    case (Item::computer):
        this->setGeometry(775,582,353,98);
        itemPixmap=new QPixmap(":/scenes/1/computer.png");
        break;
    case (Item::drawings):
            this->setGeometry(341,0,877,594);
            itemPixmap= new QPixmap(":/scenes/2/drwaings.png");
        break;
    case (Item::ekchbert):
            this->setGeometry(1066, 360,287,186);
            itemPixmap= new QPixmap(":/scenes/2/ekchbert.png");
        break;
    case (Item::letter):
            this->setGeometry(200,353,59,87);
            itemPixmap= new QPixmap(":/scenes/2/letter.png");
        break;
    case (Item::machine):
            this->setGeometry(1120,405,202,300);
            itemPixmap= new QPixmap(":/scenes/2/machine.png");
        break;
    case (Item::toolbox):
            this->setGeometry(747,585,189,101);
            itemPixmap= new QPixmap(":/scenes/2/toolbox.png");
        break;
    case (Item::agness):
            this->setGeometry(156,290,100,430);
            itemPixmap= new QPixmap(":/scenes/3/agness.png");
        break;
    case (Item::craddle):
        this->setGeometry(906,380,346,306);
        itemPixmap= new QPixmap(":/scenes/3/craddle.png");
    break;
    case (Item::order):
        this->setGeometry(1232,126,80,110);
        itemPixmap= new QPixmap(":/scenes/3/order.png");
    break;
    case (Item::vaccination):
        this->setGeometry(1280,272,123,97);
        itemPixmap= new QPixmap(":/scenes/3/vaccination.png");
    break;
    case (Item::desk):
        this->setGeometry(294,480,926,214);
        itemPixmap= new QPixmap(":/scenes/4/desk.png");
    break;
    case (Item::gun):
        this->setGeometry(1060,340,100,75);
        itemPixmap= new QPixmap(":/scenes/4/gun.png");
    break;
    case (Item::pills):
        this->setGeometry(1244,351,121,131);
        itemPixmap= new QPixmap(":/scenes/4/pills.png");
    break;
    case (Item::papers):
        this->setGeometry(320,342,160,215);
        itemPixmap= new QPixmap(":/scenes/4/papers.png");
    break;
    case (Item::identificator2):
        this->setGeometry(239,330,68,56);
        itemPixmap= new QPixmap(":/scenes/4/identificator.png");
    break;

    };
    label = new QLabel(parent);
//    label->show();
    connect(this,SIGNAL(pressed()),parent,SLOT(openNewDialogBox()));
}

/*bool InteractiveObject::event(QEvent* event)
{
  /*  switch(event->type())
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
} */

void InteractiveObject::hoverEnter(QHoverEvent* event){
 /* label->setPixmap(*itemPixmap);
  label->setGeometry(QRect(0,0,1366,768));
  label->show(); */

}

void InteractiveObject::hoverLeave(QHoverEvent *event){
  //  label->hide();
}

