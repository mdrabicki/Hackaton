#include "mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{

    setScene(2);



}
void MainWindow::startClick(){
    scene = new Scene();
    scene->setGeometry(0,0,1366,768);

    this->setCentralWidget(scene);
}


MainWindow::~MainWindow()
{

}
void MainWindow::setScene(int nr ){
  QPixmap* background;
    switch (nr) {
    case 1:
        background=new QPixmap(":/scenes/1/BG_1.png");
        break;
    case 2:
        background= new QPixmap(":/scenes/2/BG_2.png");
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    default:
        break;
    }

    QPalette palette;
    palette.setBrush(QPalette::Background,*background);
    this->setPalette(palette);


    centralWidget=new MainMenu(this);
    this->setCentralWidget((QWidget*)centralWidget);
}
