/********************************************************************************
** Form generated from reading UI file 'GameWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWIDGET_H
#define UI_GAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include "Card.h"
#include "CardVector.h"

QT_BEGIN_NAMESPACE

class Ui_GameWidgetClass
{
public:
    CardVector *widget;
    Card *widget_2;

    void setupUi(QWidget *GameWidgetClass)
    {
        if (GameWidgetClass->objectName().isEmpty())
            GameWidgetClass->setObjectName("GameWidgetClass");
        GameWidgetClass->resize(600, 400);
        widget = new CardVector(GameWidgetClass);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, -10, 591, 411));
        widget_2 = new Card(GameWidgetClass);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(410, 120, 120, 80));

        retranslateUi(GameWidgetClass);

        QMetaObject::connectSlotsByName(GameWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *GameWidgetClass)
    {
        GameWidgetClass->setWindowTitle(QCoreApplication::translate("GameWidgetClass", "GameWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWidgetClass: public Ui_GameWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWIDGET_H
