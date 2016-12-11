#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QWidget>
#include<QPushButton>
#include<QLayout>
#include<QVBoxLayout>
#include"scene.h"
#include"mainmenu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QVBoxLayout* layout;


private:
    Scene* scene;
    MainMenu* centralWidget;
    void setScene(int nr);
public slots:
    void startClick();


};

#endif // MAINWINDOW_H
