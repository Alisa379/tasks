#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Окошо");
    ui->grp_box->setTitle("Групка кнопок");
    ui->rd_butt1->setText("Или я");
    ui->rd_butt2->setText("Или я");
    ui->rd_butt1->setChecked(true);
    for (int i = 0; i < 5; ++i) {
      ui->cmb_box->addItem(QString("Вариант %1").arg(i));
    }
    ui->psh_butt->setText("I'm toggle");
    ui->psh_butt->setCheckable(true);
    ui->prg_bar->setMaximum(10);
    ui->prg_bar->setMinimum(0);
    ui->prg_bar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_psh_butt_clicked()
{
    int value = ui->prg_bar->value();
    if (value < 10) {
        ui->prg_bar->setValue(value + 1);
    }
    else {
        ui->prg_bar->setValue(0);
    }
}

