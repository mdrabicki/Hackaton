﻿#include <QCoreApplication>
#include <QTime>
#include "dialogbox.h"
#include <QLabel>
#include<QTextCodec>
#ifndef ENUMS_H
#define ENUMS_H

#endif
DialogBox::DialogBox(QWidget *parent,Item item)
{
   // ActualItem=Item::onentry;
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



    textBrowser=new QPlainTextEdit(this);
    textBrowser->setGeometry(QRect(287,72,620,198));
//    textBrowser->setFontPointSize(15);
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
