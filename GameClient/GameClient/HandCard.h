#pragma once

#include "CardVector.h"

class HandCard  : public CardVector
{
	Q_OBJECT

public:
	HandCard(QWidget *parent);
	~HandCard();
public slots:
	void setCard(QVector<CardType>) override;
	void setTemp(CardType) override;
};
