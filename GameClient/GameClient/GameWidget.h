#pragma once

#include <QtWidgets/QWidget>
#include "ui_GameWidget.h"
#include "HandCard.h"
class GameWidget : public QWidget
{
    Q_OBJECT

public:
    GameWidget(QWidget *parent = nullptr);
    ~GameWidget();
private:
    Ui::GameWidgetClass ui;
};
