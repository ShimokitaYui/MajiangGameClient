#pragma once

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include "CardType.h"

class Card  : public QWidget
{
	Q_OBJECT

public:
	Card(QWidget* parent = nullptr);
	Card(QWidget* parent, CardType, bool, uint8_t index);
	~Card();
	CardType _type;
	uint8_t _index; //Index of cardvector form 0-13 13 is the temp card
	bool _isRotate;
protected:
	void paintEvent(QPaintEvent* event) override;
public slots:
	void setType(CardType);
signals:
	uint8_t getIndex();
};
