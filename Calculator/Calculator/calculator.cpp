#include "calculator.h"
#include "ui_calculator.h"

const static double PI=3.1415926768;

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}


void Calculator::on_pushButton_clicked()
{
    bool ok;
    QString tempStr;
    QString valueStr = ui->lineEdit->text();
    int valueInt=valueStr.toInt(&ok);
    double area =valueInt*valueInt*PI;
    ui->label->setText(tempStr.setNum(area));
}


