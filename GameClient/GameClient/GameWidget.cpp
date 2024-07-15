#include "GameWidget.h"

GameWidget::GameWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    QVector<CardType> vec(10, Empty);
    ui.widget->setCard(vec);
    ui.widget->setTemp(Empty);
}

GameWidget::~GameWidget()
{}
