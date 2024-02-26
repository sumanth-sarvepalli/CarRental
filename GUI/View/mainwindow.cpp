#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::loginButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loginButtonClicked()
{
    // if user name and password matches, show next page

    // else display Message invalid username/password
    QMessageBox::information(this, "Error", "Hey user! check your credentials!!");
    //this->close();
}

