#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setActiveControls();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_addButton_clicked()
{
    if (tila == 2)
    {
        qDebug() << "Yhteenlasku sallittu, tila " << tila;
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();


        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();

        qDebug() << num1 << " + " << num2;
        result = num1 + num2;

        QString r = QString::number(result);
        ui->resultEdit->setText(r);

        tila = 0;
        setActiveControls();
    }
}


void MainWindow::on_subButton_clicked()
{
    if (tila == 2)
        {
        qDebug() << "Vähennyslasku sallittu, tila " << tila;
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();


        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();

        qDebug() << num1 << " - " << num2;
        result = num1 - num2;

        QString r = QString::number(result);
        ui->resultEdit->setText(r);

        tila = 0;
        setActiveControls();
    }
}

void MainWindow::on_mulButton_clicked()
{

    if (tila == 2)
    {
        qDebug() << "Kertolasku sallittu, tila " << tila;
        QString n1 = ui->num1Edit->text();
        num1 = n1.toInt();


        QString n2 = ui->num2Edit->text();
        num2 = n2.toInt();

        qDebug() << num1 << " × " << num2;
        result = num1 * num2;

        QString r = QString::number(result);
        ui->resultEdit->setText(r);

        tila = 0;
        setActiveControls();
    }
}


void MainWindow::on_divButton_clicked()
{

    if (tila == 2)
    {
        qDebug() << "Jakolasku sallittu, tila " << tila;
        QString n1 = ui->num1Edit->text();
        num1 = n1.toFloat();

        QString n2 = ui->num2Edit->text();
        num2 = n2.toFloat();

        qDebug() << num1 << " ÷ " << num2;

        newResult = static_cast<float>(num1) / num2;
        ui->resultEdit->setText(QString::number(newResult, 'f', 1));

        tila = 0;
        setActiveControls();
    }
}

void MainWindow::setEditNum(int num)
{
    if (tila == 0) {
        qDebug() << "Tila 0: kirjoitetaan num1";
        QString lukuNyt = ui->num1Edit->text();
        lukuNyt += QString::number(num);
        ui->num1Edit->setText(QString::number(num));

    } else if (tila == 1) {
        qDebug() << "Tila 1: kirjoitetaan num2";
        QString lukuNyt = ui->num2Edit->text();
        lukuNyt += QString::number(num);
        ui->num2Edit->setText(QString::number(num));

    } else {
        qDebug() << "vaara tila: ei voi syottaa numeroa";
    }
}

void MainWindow::on_Button0_clicked()
{
    setEditNum(0);
}

void MainWindow::on_Button1_clicked()
{
    setEditNum(1);
}

void MainWindow::on_Button2_clicked()
{
    setEditNum(2);
}

void MainWindow::on_Button3_clicked()
{
    setEditNum(3);
}

void MainWindow::on_Button4_clicked()
{
    setEditNum(4);
}

void MainWindow::on_Button5_clicked()
{
    setEditNum(5);
}

void MainWindow::on_Button6_clicked()
{
    setEditNum(6);
}

void MainWindow::on_Button7_clicked()
{
    setEditNum(7);
}

void MainWindow::on_Button8_clicked()
{
    setEditNum(8);
}

void MainWindow::on_Button9_clicked()
{
    setEditNum(9);
}


void MainWindow::on_enterButton_clicked()
{
    qDebug() << "nykyinen tila " << tila;
    if (tila == 0) {
        tila = 1;
        setActiveControls();

    } else if (tila == 1) {
        tila = 2;
        setActiveControls();
    }

    qDebug() << "nykyinen tila" << tila;
}


void MainWindow::on_clearButton_clicked()
{
    qDebug() << "tyhjennetaan";
    ui->num1Edit->clear();
    ui->num2Edit->clear();
    ui->resultEdit->clear();
    tila = 0;
    setActiveControls();
}

void MainWindow::setActiveControls()
{
    if (tila == 0) {
        qDebug() << "Tila 0 kontrollit";
        ui->addButton->setEnabled(false);
        ui->subButton->setEnabled(false);
        ui->divButton->setEnabled(false);
        ui->mulButton->setEnabled(false);

        ui->Button1->setEnabled(true);
        ui->Button2->setEnabled(true);
        ui->Button3->setEnabled(true);
        ui->Button4->setEnabled(true);
        ui->Button5->setEnabled(true);
        ui->Button6->setEnabled(true);
        ui->Button7->setEnabled(true);
        ui->Button8->setEnabled(true);
        ui->Button9->setEnabled(true);
        ui->Button0->setEnabled(true);

    } else if (tila == 1){
        qDebug() << "Tila 1 kontrollit";
        ui->addButton->setEnabled(false);
        ui->subButton->setEnabled(false);
        ui->divButton->setEnabled(false);
        ui->mulButton->setEnabled(false);

        ui->Button1->setEnabled(true);
        ui->Button2->setEnabled(true);
        ui->Button3->setEnabled(true);
        ui->Button4->setEnabled(true);
        ui->Button5->setEnabled(true);
        ui->Button6->setEnabled(true);
        ui->Button7->setEnabled(true);
        ui->Button8->setEnabled(true);
        ui->Button9->setEnabled(true);
        ui->Button0->setEnabled(true);
    } else if (tila == 2) {
        qDebug() << "Tila 2 kontrollit";
        ui->addButton->setEnabled(true);
        ui->subButton->setEnabled(true);
        ui->divButton->setEnabled(true);
        ui->mulButton->setEnabled(true);

        ui->Button1->setEnabled(false);
        ui->Button2->setEnabled(false);
        ui->Button3->setEnabled(false);
        ui->Button4->setEnabled(false);
        ui->Button5->setEnabled(false);
        ui->Button6->setEnabled(false);
        ui->Button7->setEnabled(false);
        ui->Button8->setEnabled(false);
        ui->Button9->setEnabled(false);
        ui->Button0->setEnabled(false);
    } else {
        qDebug() << "mahdoton tila";
    }
}



