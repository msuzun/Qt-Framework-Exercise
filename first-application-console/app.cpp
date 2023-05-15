// Qt'de Base (Temel-İskelet) GUI Programı

#include <QApplication>
#include "mainwindow.hpp"

int main(int argc, char * argv[]){
    QApplication app(argc,argv);

    MainWindow mainwindow;
    mainwindow.show();

    app.exec();

    return 0;
}