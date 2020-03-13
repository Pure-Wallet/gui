#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QStatusBar>
#include <QPushButton>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QGridLayout>

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
    void GenerateWallet();
};
#endif // MAINWINDOW_H
