#include "OtherCard.h"

OtherCard::OtherCard(QWidget* parent)
	: CardVector(parent, Left)
{

}
OtherCard::OtherCard(QWidget* parent, VectorType vecType) 
	: CardVector(parent, vecType)
{
	
	for (int i = 0; i < 13; i++) {
		_cardVec.push_back(new Card(this, Empty, false, i));
		_cardVec.move(50 * i, 20);
	}
}

OtherCard::~OtherCard()
{

}

void OtherCard::setCard(QVector<CardType>) 
{

}

void OtherCard::setTemp(CardType) 
{

}