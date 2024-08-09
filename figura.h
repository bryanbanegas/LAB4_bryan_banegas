#ifndef FIGURA_H
#define FIGURA_H
#include <QPainter>

class figura
{
protected:
    QColor color_;
public:
    explicit figura(const QColor& color) : color_(color) {}
    virtual ~figura() = default;

    virtual void dibujar(QPainter& painter) = 0;
};

#endif // FIGURA_H
