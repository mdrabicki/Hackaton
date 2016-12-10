#ifndef DIALOGBOX_H
#define DIALOGBOX_H
#include<QTextBlock>
#include<QPushButton>
#include<QWidget>
#include<QVBoxLayout>
#include<QImage>
#include<QLabel>
class DialogBox:public QWidget
{
public:
    DialogBox(QWidget* parent);
private:
    QPushButton* textBox;
    QImage* portret;
    QLabel* label;
};

#endif // DIALOGBOX_H
