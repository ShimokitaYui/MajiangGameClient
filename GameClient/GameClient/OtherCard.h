#pragma once

#include "CardVector.h"

class OtherCard  : public CardVector
{
	Q_OBJECT

public:
	OtherCard(QWidget *parent);
	OtherCard(QWidget* parent, VectorType vecType);
	~OtherCard();
public slots:
	void setCard(QVector<CardType>) override;
	void setTemp(CardType) override;
};
