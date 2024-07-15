#include "CardVector.h"

CardVector::CardVector(QWidget*parent)
	: QWidget(parent)
{
	_type = Self;
	_num = 0;
	_cardVec = QVector<Card*>();
	_cardType = QVector<CardType>(13, Empty);
	_tempType = Empty;
	_tempCard = nullptr;
	isTurn = false;
}

CardVector::CardVector(QWidget* parent, VectorType type) 
	: QWidget(parent), 
	_type(type) {
	_num = 0;
	_cardVec = QVector<Card*>();
	_cardType = QVector<CardType>(13, Empty);
	_tempType = Empty;
	_tempCard = nullptr;
	isTurn = false;
}

CardVector::~CardVector()
{

}

QVector<CardType> CardVector::getCard() {
	return _cardType;
}

void CardVector::setCard(uint8_t num) 
{
	_num = num;
	for (int i = 0; i < 13; i++) {
		if (i < _num)
		{
			_cardVec[i]->show();
		}
		else 
		{
			_cardVec[i]->hide();
		}
	}
}