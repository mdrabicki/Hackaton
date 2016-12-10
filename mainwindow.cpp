#include "mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
    centralWidget=new MainMenu(this);
    //this->setCentralWidget((QWidget*)centralWidget);
    QPixmap background("E:\\Projekty\\QT\\Hackaton\\scenes\\1\\BG_1.png");
    QPalette palette;
    palette.setBrush(QPalette::Background,background);
    this->setPalette(palette);


}
void MainWindow::startClick(){
    scene = new Scene();
    this->setCentralWidget(scene);
}


MainWindow::~MainWindow()
{

}
