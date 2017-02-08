#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    switcher = new QTabSwitcher(this);

    switcher->addTab(ui->tab1, ui->but1, "background-color:#00ff00;", "background-color:#ffffff;");
    switcher->addTab(ui->tab2, ui->but2, "background-color:#00ff00;", "background-color:#ffffff;");
    switcher->addTab(ui->tab3, ui->but3, "background-color:#00ff00;", "background-color:#ffffff;");

    switcher->start();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete switcher;
}

void MainWindow::on_Activate_clicked()
{
    switch (ui->ActiveBox->currentIndex())
    {
    case 0:
        if (switcher->contains(ui->but1))
            switcher->activateTab(ui->tab1);
        break;
    case 1:
        if (switcher->contains(ui->but2))
            switcher->activateTab(ui->tab2);
        break;
    case 2:
        if (switcher->contains(ui->but3))
            switcher->activateTab(ui->tab3);
        break;
    default:
        break;
    }
}

void MainWindow::on_Deactivate_clicked()
{
    switch (ui->DeactiveBox->currentIndex())
    {
    case 0:
        if (switcher->contains(ui->but1))
            switcher->deactivateTab(ui->tab1);
        break;
    case 1:
        if (switcher->contains(ui->but2))
            switcher->deactivateTab(ui->tab2);
        break;
    case 2:
        if (switcher->contains(ui->but3))
            switcher->deactivateTab(ui->tab3);
        break;
    default:
        break;
    }
}

void MainWindow::on_Delete_clicked()
{
    switch (ui->DeleteBox->currentIndex())
    {
    case 0:
        if (switcher->contains(ui->but1))
            switcher->removeTab(ui->tab1);
        break;
    case 1:
        if (switcher->contains(ui->but2))
            switcher->removeTab(ui->tab2);
        break;
    case 2:
        if (switcher->contains(ui->but3))
            switcher->removeTab(ui->tab3);
        break;
    default:
        break;
    }
}

void MainWindow::on_Add_clicked()
{
    switch (ui->AddBox->currentIndex())
    {
    case 0:
        if (!switcher->contains(ui->but1))
            switcher->addTab(ui->tab1, ui->but1, "background-color:#00ff00;", "background-color:#ffffff;");
        break;
    case 1:
        if (!switcher->contains(ui->but2))
            switcher->addTab(ui->tab2, ui->but2, "background-color:#00ff00;", "background-color:#ffffff;");
        break;
    case 2:
        if (!switcher->contains(ui->but3))
            switcher->addTab(ui->tab3, ui->but3, "background-color:#00ff00;", "background-color:#ffffff;");
        break;
    default:
        break;
    }
}
