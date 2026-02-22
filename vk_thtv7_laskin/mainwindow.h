#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setEditNum(int num);
    void setActiveControls();

private slots:
    void on_addButton_clicked();

    void on_subButton_clicked();

    void on_enterButton_clicked();

    void on_clearButton_clicked();

    void on_Button1_clicked();

    void on_Button2_clicked();

    void on_Button3_clicked();

    void on_Button4_clicked();

    void on_Button5_clicked();

    void on_Button6_clicked();

    void on_Button7_clicked();

    void on_Button8_clicked();

    void on_Button9_clicked();

    void on_Button0_clicked();

    void on_mulButton_clicked();

    void on_divButton_clicked();

private:
    Ui::MainWindow *ui;
    int num1;
    int num2;
    int result;
    float newResult;

    int tila = 0;
};
#endif // MAINWINDOW_H
