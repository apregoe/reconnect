#include "MyCentralRectItem.h"
#include <QPen>
#include <QPainter>

MyCentralRectItem::MyCentralRectItem(const QRectF & rect, QGraphicsItem * parent)
		: MyCentralGraphicsItem(rect, parent){
	setAcceptHoverEvents(true);
}

void MyCentralRectItem::paint(QPainter * painter,
		const QStyleOptionGraphicsItem * option, QWidget * widget){
	this->pen = QPen(Qt::green, 3);
	painter->setPen(pen);
	painter->setRenderHint(QPainter::Antialiasing);
	QBrush brush(Qt::white);
	painter->setBrush(brush);
	painter->drawRect(boundingRect());
	MyCentralGraphicsItem::updateConnectingPoints();
}