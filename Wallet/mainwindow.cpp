#include "mainwindow.h"
#include <new>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent){
    setWindowTitle("Pure Wallet");
    setMinimumSize(800, 450);
    QMenuBar * menuBar = new QMenuBar(this);
    setMenuBar(menuBar);
    QMenu * fileMenu = menuBar->addMenu("&File");

    //Fill Menu
    QAction * action = new QAction("&New", this);
    // New
    connect(action, &QAction::triggered, this, &MainWindow::OnFileNew);
    fileMenu->addAction(action);
    // Open
    action = new QAction("&Open", this);
    connect(action, &QAction::triggered, this, &MainWindow::OnFileOpen);
    fileMenu->addAction(action);
    // Save
    action = new QAction("&Save", this);
    connect(action, &QAction::triggered, this, &MainWindow::OnFileSave);
    fileMenu->addAction(action);
    fileMenu->addSeparator();
    //Exit
    action = new QAction("&Close", this);
    connect(action, &QAction::triggered, this, &MainWindow::close);
    fileMenu->addAction(action);

    //Key Menu
    QMenu * keyMenu = menuBar->addMenu("&Keys");
    action = new QAction("&Generate", this);
    connect(action, &QAction::triggered, this, &MainWindow::GenerateKeyPair);
    keyMenu->addAction(action);


    QPushButton *button = new QPushButton("&Load Wallet", this);
    button->setMinimumSize(200, 200)
    action = new QAction("&Load Wallet");
    button->addAction(action);
    setCentralWidget(button);





    //STATUS BAR
    QStatusBar * statusBar = new QStatusBar(this);
    setStatusBar(statusBar);
}

void MainWindow::OnFileNew(){
  statusBar()->showMessage("File -> New");
}
void MainWindow::OnFileOpen(){
    statusBar()->showMessage("File -> Open");
}
void MainWindow::OnFileSave(){
    statusBar()->showMessage("File -> Save");
}

void MainWindow::GenerateKeyPair(){
    statusBar()->showMessage("Generating Keys...");
}
void MainWindow::LoadWallet(){
    statusBar()->showMessage("Loading Wallet...");
}


MainWindow::~MainWindow()
{
}

