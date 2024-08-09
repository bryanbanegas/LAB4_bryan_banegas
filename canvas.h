#ifndef CANVAS_H
#define CANVAS_H
#include <QWidget>
#include "figura.h"
#include <vector>

class canvas: public QWidget
{
    Q_OBJECT
private:
    std::vector<figura*> figuras;

protected:
    void paintEvent(QPaintEvent* event) override {
        QPainter painter(this);

        for(auto& figura:figuras){
            figura->dibujar(painter);
        }
    }

public:
    canvas(QWidget* parent=nullptr):QWidget(parent){}

    void agregarFigura(figura* figure) {
        figuras.emplace_back(figure);
        update(); // Redibuja el lienzo
    }
};

#endif // CANVAS_H
