#include <QCoreApplication>
#include <QTime>
#include "dialogbox.h"
#include <QLabel>
#include<QTextCodec>
#ifndef ENUMS_H
#define ENUMS_H

#endif
DialogBox::DialogBox(QWidget *parent,Item item)
{


    QString fileURL;

    switch(item){
    case (Item::onentry):
       fileURL = ":/dialogs/1/onentry.txt";
        break;
    case (Item::wrench):
    fileURL = ":/dialogs/1/wrench.txt";
    break;
    case Item::notes:
    fileURL = ":/dialogs/1/notes.txt";
    break;
    case Item::body:
        fileURL = ":/dialogs/1/body.txt";
        break;
    case Item::identificator:
         fileURL = ":/dialogs/1/identificator.txt";
        break;

    case Item::computer:
        fileURL = ":/dialogs/1/computer.txt";
        break;
    case Item::monitor:
        fileURL = ":/dialogs/1/monitor.txt";
        break;


    case Item::onentry2:
        fileURL = ":/dialogs/2/onentry.txt";
        break;
    case Item::drawings:
        fileURL = ":/dialogs/2/drawings.txt";
        break;
    case Item::ekchbert:
        fileURL = ":/dialogs/2/ekchbert.txt";
        break;
    case Item::letter:
        fileURL = ":/dialogs/2/letter.txt";
        break;
    case Item::machine:
        fileURL = ":/dialogs/2/machine.txt";
        break;
    case Item::toolbox:
        fileURL = ":/dialogs/2/toolbox.txt";
        break;


    case Item::agness:
        fileURL = ":/dialogs/3/agness.txt";
        break;
    case Item::craddle:
        fileURL = ":/dialogs/3/craddle.txt";
        break;
    case Item::vaccination:
        fileURL = ":/dialogs/3/vaccination.txt";
        break;
    case Item::order:
        fileURL = ":/dialogs/3/order.txt";
        break;
     case Item::onentry3:
            fileURL = ":/dialogs/3/onentry.txt";
            break;
    case Item::desk:
           fileURL = ":/dialogs/4/desk.txt";
           break;
    case Item::gun:
           fileURL = ":/dialogs/4/gun.txt";
           break;
    case Item::pills:
           fileURL = ":/dialogs/4/pills.txt";
           break;
    case Item::papers:
           fileURL = ":/dialogs/4/papers.txt";
           break;
    case Item::identificator2:
        fileURL = ":/dialogs/4/identificator.txt";
        break;
    case Item::onentry4:
        fileURL = ":/dialogs/4/onentry.txt";
        break;





    }


        QFile file(fileURL);
        file.open(QFile::ReadOnly);
        QString dialogText = QLatin1String(file.readAll());





    this->setParent(parent);
    QPixmap pixmap(":/portrets/dialogbox.png");
    label=new QLabel(this);
    label->setPixmap(pixmap);
    this->setGeometry(0,0,1366,768);
    this->setStyleSheet("background:transparent;");

    int id = QFontDatabase::addApplicationFont(":/dialogs/font.tff");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont font(family);



    textBrowser=new QTextBrowser(this);
    textBrowser->setGeometry(QRect(287,72,620,198));
    textBrowser->setFontPointSize(15);
    textBrowser->setFont(font);
    this->show();
    foreach (QChar c, dialogText) {

        textBrowser->insertPlainText(c);
        QTime sleep = QTime::currentTime().addMSecs(15);

            while(QTime::currentTime()<sleep){
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            }
    }



}
void DialogBox::mousePressEvent(QMouseEvent* e){
    this->hide();
}
