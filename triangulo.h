#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "figura.h"
#include <QPolygon>

class triangulo: public figura
{
private:
    QPolygon poligono_;
public:
    triangulo(const QPolygon& poligono, const QColor& color)
        : figura(color), poligono_(poligono) {}

    void dibujar(QPainter& painter) override {
        painter.setBrush(color_);
        painter.drawPolygon(poligono_);
    }
};

#endif // TRIANGULO_H
