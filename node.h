#ifndef NODE_H
#define NODE_H

#include <QGraphicsItem>
#include <QtWidgets>
#include "link.h"

class Node : public QGraphicsItem
{

    Q_DECLARE_TR_FUNCTIONS(Node)

public:
    Node();
    ~Node();

public:
    void setText(const QString &text);
    QString text();

    void setTextColor(const QColor &color);
    QColor textColor();

    void setOutLineColor(const QColor &color);
    QColor outLineColor();

    void setBackgroundColor(const QColor &color);
    QColor backgroundColor();

    void addLink(Link *link);
    void removeLink(Link *link);

    QRectF boundingRect() const;
    QPainterPath shape() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *);

protected:
    void mouseDoubleClickEvent(QGraphicsSceneEvent *event);
    QVariant itemChange(GraphicsItemChange change, const QVariant &value);

private:
    QRectF outlineRect() const;
    int roundness(double size) const;

private:
    QSet<Link *> myLinks;
    QString myText;
    QColor myTextColor;
    QColor myBackgroundColor;
    QColor myOutlineColor;
};

#endif // NODE_H
