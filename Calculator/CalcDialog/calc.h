#ifndef CALC_H
#define CALC_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class Calc : public QDialog
{
    Q_OBJECT

public:
    Calc(QWidget *parent = 0);
    ~Calc();
private:
    QLabel *label1,*label2;
    QLineEdit *lineEdit;
    QPushButton *button;
private slots:
    void showArea();

};

#endif // CALC_H
