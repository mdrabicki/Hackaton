#ifndef DIALOGBOX_H
#define DIALOGBOX_H
#include<QTextBlock>
#include<QPushButton>
#include<QWidget>
#include<QVBoxLayout>
#include<QImage>
#include<QLabel>
#include <QTextBrowser>
#include"interactiveobject.h"
#include<enums.h>


class DialogBox:public QPushButton
{


public:

    DialogBox(QWidget* parent,Item);
private:
    void mousePressEvent(QMouseEvent* e);
    QLabel* label;
    QTextBrowser* textBrowser;




};

#endif // DIALOGBOX_H
