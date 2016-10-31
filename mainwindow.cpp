#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->visionView->setText("My New value");
    ui->visionView->setMachineState( VisionView::LEARNING );
    ui->visionViewToolBox->SetVisionView(ui->visionView);
    ui->moduleSelectWidget->setStackedWidget(ui->menuContainer);
    showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}
