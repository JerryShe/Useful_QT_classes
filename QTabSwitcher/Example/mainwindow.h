#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qtabswitcher.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Activate_clicked();

    void on_Deactivate_clicked();

    void on_Delete_clicked();

    void on_Add_clicked();

private:
    QTabSwitcher* switcher;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
