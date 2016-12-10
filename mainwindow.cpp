#include "mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
    this->setStyleSheet("background-image:url(:/scenes/1/BG_1.png)");
    centralWidget=new MainMenu(this);
    this->setCentralWidget((QWidget*)centralWidget);



}
void MainWindow::startClick(){
    scene = new Scene();
    this->setCentralWidget(scene);
}


MainWindow::~MainWindow()
{

}
