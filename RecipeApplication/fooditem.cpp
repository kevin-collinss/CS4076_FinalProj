#include "foodItem.h"

FoodItem::FoodItem(const QString& name)
    : m_name(name)
{}

QString FoodItem::getName() const
{
    return m_name;
}

FoodItemWithCalories::FoodItemWithCalories(const QString& name, int calories)
    : FoodItem(name)
    , m_calories(calories)
{}

int FoodItemWithCalories::getCalories() const
{
    return m_calories;
}
