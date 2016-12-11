#include "mainwindow.h"





MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{

    pointer=this;
    setScene(nr);



}
void MainWindow::startClick(){


    this->setCentralWidget(scene);

}


MainWindow::~MainWindow()
{

}
void MainWindow::setScene(int nr ){
    scene = new Scene(nr,this);


  QPixmap* background;
    switch (nr) {
    case 1:
        background=new QPixmap(":/scenes/1/BG_1.png");
        break;
    case 2:
        background=new QPixmap(":/scenes/2/BG_2.png");
        break;
    case 3:
        background=new QPixmap(":/scenes/3/BG_3.png");
        break;
    case 4:
        background=new QPixmap(":/scenes/4/BG_4.png");
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
     scene->setGeometry(0,0,1366,768);

}
void MainWindow::nextScene(){

    setScene(nr);
}
