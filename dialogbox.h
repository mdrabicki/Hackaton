#ifndef DIALOGBOX_H
#define DIALOGBOX_H
#include<QTextBlock>
#include<QPushButton>
#include<QWidget>
#include<QVBoxLayout>
#include<QImage>
#include<QLabel>
#include <QTextBrowser>
class DialogBox:public QPushButton
{
public:
    DialogBox(QWidget* parent);
private:
    void mousePressEvent(QMouseEvent* e);
    QLabel* label;
    QTextBrowser* textBlock;



};

#endif // DIALOGBOX_H
