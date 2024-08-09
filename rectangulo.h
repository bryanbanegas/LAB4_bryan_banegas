#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "figura.h"
#include <QRect>

class rectangulo: public figura
{
private:
    QRect rect_;
public:
    rectangulo(const QRect& rect, const QColor& color)
        : figura(color), rect_(rect) {}

    void dibujar(QPainter& painter) override {
        painter.setBrush(color_);
        painter.drawRect(rect_);
    }
};

#endif // RECTANGULO_H
