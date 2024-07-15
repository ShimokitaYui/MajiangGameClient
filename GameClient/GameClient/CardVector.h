#pragma once

#include <QObject>
#include <QWidget>
#include <QVector>
#include "CardType.h"
#include "Card.h"

class CardVector  : public QWidget
{
	Q_OBJECT

public:
	CardVector(QWidget* parent=nullptr);
	CardVector(QWidget* parent, VectorType);
	~CardVector();
protected:
	VectorType _type; //User type
	uint8_t _num; //the num of card
	QVector<Card*> _cardVec; //handcard
	QVector<CardType> _cardType;
	Card* _tempCard;//New handcard
	CardType _tempType;
	bool isTurn;
public :
	QVector<CardType> getCard();
public slots:
	void setCard(uint8_t num);
	virtual void setCard(QVector<CardType>);
	virtual void setTemp(CardType);
	
signals:
	CardType getChoose(); // return the card you choose
};
