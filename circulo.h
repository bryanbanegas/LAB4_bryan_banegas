#ifndef CIRCULO_H
#define CIRCULO_H
#include "figura.h"
#include <QPoint>

class circulo: public figura
{
private:
    QPoint centro_;
    int radio_;
public:
    circulo(const QPoint& centro, int radio, const QColor& color)
        : figura(color), centro_(centro), radio_(radio) {}

    void dibujar(QPainter& painter) override {
        painter.setBrush(color_);
        painter.drawEllipse(centro_, radio_, radio_);
    }
};

#endif // CIRCULO_H
