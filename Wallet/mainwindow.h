#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QStatusBar>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void OnFileNew();
    void OnFileOpen();
    void OnFileSave();
    void GenerateKeyPair();
    void LoadWallet();
};
#endif // MAINWINDOW_H
