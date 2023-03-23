#ifndef RECIPE_H
#define RECIPE_H

#include <QString>
#include <QList>
#include "fooditem.h"

class Recipe
{
public:
    Recipe(QString name, QString description, QList<FoodItem*> ingredients);
    QString getName() const;
    QString getDescription() const;
    QList<FoodItem*> getIngredients() const;

private:
    QString m_name;
    QString m_description;
    QList<FoodItem*> m_ingredients;
};

#endif // RECIPE_H
