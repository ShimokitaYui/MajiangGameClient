#include "Card.h"
#include <QPalette>
#include <QPushButton>
#include <QPainter>
Card::Card(QWidget*parent)
	: QWidget(parent)
{
	//Default type is Empty
	setType(Empty);
	_index = 0;
	_isRotate = false;
	_index = 0;
	this->setFixedSize(50,70);
	this->hide();
}

Card::Card(QWidget* parent, CardType type, bool isRotate, uint8_t index)
	: QWidget(parent),
	_isRotate(isRotate),
	_index(index)
{
	setType(type);
	if (isRotate) 
	{ // Is roate
		this->setFixedSize(70, 50);
	}
	else 
	{
		this->setFixedSize(50, 70);
	}
	this->hide();
}

Card::~Card()
{

}

void Card::setType(CardType type) {
	_type = type;
	//Change background
}

void Card::paintEvent(QPaintEvent* event) {
	QPainter painter(this);
	painter.fillRect(rect(), Qt::white);
	painter.setPen(QPen(Qt::black, 1)); 
	painter.drawRect(rect());
}