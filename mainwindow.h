#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include "canvas.h"
#include "circulo.h"
#include "rectangulo.h"
#include "triangulo.h"

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

private slots:
    void on_agregar_Circulo_clicked();

    void on_agregar_Rectangulo_clicked();

    void on_agregar_Triangulo_clicked();

private:
    Ui::MainWindow *ui;
    canvas* canva;
    QWidget* centralWidget;      // Widget central que contiene todo
    QVBoxLayout* mainLayout;
};
#endif // MAINWINDOW_H
