#include "recipe.h"
#include "fooditem.h"

Recipe::Recipe(QString name, QString description, QList<FoodItem*> ingredients)
    : m_name(name), m_description(description), m_ingredients(ingredients)
{
}

QString Recipe::getName() const
{
    return m_name;
}

QString Recipe::getDescription() const
{
    return m_description;
}

QList<FoodItem*> Recipe::getIngredients() const
{
    return m_ingredients;
}
