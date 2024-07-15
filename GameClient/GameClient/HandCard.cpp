#include "HandCard.h"

HandCard::HandCard(QWidget* parent)
	: CardVector(parent, Self)
{
	for (int i = 0; i < 13; i++) {
		_cardVec.push_back(new Card(this, Empty, false, i));
		_cardVec.move(50 * i, 20);
	}
}

HandCard::~HandCard()
{

}

void HandCard::setCard(QVector<CardType> cardVec)
{
	if (cardVec.size() > 13) return;
	_num = cardVec.size();
	_cardType = cardVec;
	for (int i = 0; i < 13; i++) {
		if (i < _num)
		{
			_cardVec[i]->setType(_cardType[i]);
			_cardVec[i]->show();
		}
		else 
		{
			_cardVec[i]->hide();
		}
	}
}

void HandCard::setTemp(CardType tempType)
{
	isTurn = true;
	_tempType = tempType;
	_tempCard->setType(_tempType);
	_tempCard->show();
	_tempCard->move(50 * _num + 10, 20);
}