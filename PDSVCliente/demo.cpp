#include "demo.h"
#include "ui_demo.h"

Demo::Demo(QWidget *parent): QWidget(parent), ui(new Ui::Demo)
{
    ui->setupUi(this);
    connect(ui->btn_close, &QAbstractButton::clicked, this, &QWidget::close);
}

Demo::~Demo()
{
    delete ui;
}


void Demo::on_pushButton_clicked()
{

}


void Demo::on_btn_exit_clicked()
{
    qInfo()<<"Clicked Button\n";
    close();
}

