#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    centralWidget=new QWidget(this);
    mainLayout=new QVBoxLayout(centralWidget);

    canva=new canvas(this);
    mainLayout->addWidget(canva);

    QPushButton* btnAgregarCirculo=new QPushButton("Agregar Círculo", this);
    QPushButton* btnAgregarRectangulo=new QPushButton("Agregar Rectángulo", this);
    QPushBu     tton* btnAgregarTriangulo=new QPushButton("Agregar Triángulo", this);

    mainLayout->addWidget(btnAgregarCirculo);
    mainLayout->addWidget(btnAgregarRectangulo);
    mainLayout->addWidget(btnAgregarTriangulo);

    connect(btnAgregarCirculo, &QPushButton::clicked, this, &MainWindow::on_agregar_Circulo_clicked);
    connect(btnAgregarRectangulo, &QPushButton::clicked, this, &MainWindow::on_agregar_Rectangulo_clicked);
    connect(btnAgregarTriangulo, &QPushButton::clicked, this, &MainWindow::on_agregar_Triangulo_clicked);

    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_agregar_Circulo_clicked()
{
    canva->agregarFigura(new circulo(QPoint(100, 100), 50, Qt::red));
}

void MainWindow::on_agregar_Rectangulo_clicked() {
    canva->agregarFigura(new rectangulo(QRect(150, 150, 100, 50), Qt::green));
}

void MainWindow::on_agregar_Triangulo_clicked() {
    QPolygon poligono;
    poligono << QPoint(250, 250) << QPoint(300, 200) << QPoint(350, 250);
    canva->agregarFigura(new triangulo(poligono, Qt::blue));
}
