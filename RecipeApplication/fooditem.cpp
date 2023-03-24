#include "fooditem.h"
#include "quantity.h"

FoodItem::FoodItem(const QString& name)
    : m_name(name)
{}

QString FoodItem::getName() const
{
    return m_name;
}

FoodItemWithQuantity::FoodItemWithQuantity(const QString& name, Quantity quantity)
    : FoodItem(name), m_quantity(quantity), m_quantityInOunces(quantity.isOunces)
{}

double FoodItemWithQuantity::getQuantity() const
{
    return m_quantityInOunces ? m_quantity.ounces : m_quantity.grams;
}
