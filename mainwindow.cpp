#include "mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{

    QPixmap background(":/scenes/1/BG_1.png");
    QPalette palette;
    palette.setBrush(QPalette::Background,background);
//    palette.setBrush(QPalette::Background,test);
    this->setPalette(palette);


    centralWidget=new MainMenu(this);
    this->setCentralWidget((QWidget*)centralWidget);



}
void MainWindow::startClick(){
    scene = new Scene();
    scene->setGeometry(0,0,1366,768);
//    scene->setStyleSheet("background-image:url(E:/Projekty/QT/Hackaton/Test.png)");
    this->setCentralWidget(scene);
}


MainWindow::~MainWindow()
{

}
