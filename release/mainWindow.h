#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QAction;
class QActionGroup;
class QLabel;
class QMenu;
class QPushButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

private slots:
    void open();
    void save();
    void quit();

private:
    void createActions();
    void createButtons();
    void createMenus();

    QMenu *fileMenu;
    QAction *openAct;
    QAction *saveAct;
    QAction *exitAct;
    QLabel *notationLabel;
    QPushButton *openBut;
    QPushButton *saveBut;
    QPushButton *quitBut;
};

#endif
