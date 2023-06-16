#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QFileInfo>
#include <QResource>
#include <QDebug>
/*
rcc --binary -o image0616.rcc image.qrc
*/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //QResource::registerResource("C:/ccli/code_/Qt_demo/QPainterDemo/image0616.rcc");
    QFileInfo fi(":/desktop/20230616");
    qDebug() << fi.exists() << " " << fi.isFile() << " " << fi.size();
    ui->label->setPixmap(QPixmap(":/desktop/20230616"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

