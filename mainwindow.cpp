#include "mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
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
