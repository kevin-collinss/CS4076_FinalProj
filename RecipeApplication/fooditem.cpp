#include "fooditem.h"
#include "quantity.h"

FoodItem::FoodItem(const QString& name)
    : m_name(name)
{}

QString FoodItem::getName() const
{
    return m_name;
}

FoodItemWithQuantity::FoodItemWithQuantity(const QString& name, const Quantity& quantity)
    : FoodItem(name), m_quantity(quantity) {}

const Quantity& FoodItemWithQuantity::getQuantity() const
{
    return m_quantity;
}
