#ifndef RENDERAREA_H
#define RENDERAREA_H
#include <QWidget>
#include <qsize.h>
#include <qpen.h>
#include <qpainter.h>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    enum Shape {Line, Polyline, Polygon, Rect, Ellipse, Text};
    RenderArea(QWidget *parent = 0);
    QSize minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;
public slots:
    void setShape(Shape shape);
    void setPen(const QPen &pen);
    void setBrush(const QBrush &brush);
    void setAntialiased(bool antialiased);
    void setTransformed(bool transformed);
protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
private:
    Shape shape;
    QPen pen;
    QBrush brush;
    bool antialiased;
    bool transformed;
    QPixmap pixmap;
};

#endif // RENDERAREA_H
