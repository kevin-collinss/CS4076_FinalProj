#ifndef FOODITEM_H
#define FOODITEM_H

#include "quantity.h"
#include <QString>

class FoodItem {
public:
    FoodItem(const QString& name);
    virtual QString getName() const;

private:
    QString m_name;
};

class FoodItemWithQuantity : public FoodItem {
public:
    FoodItemWithQuantity(const QString& name, Quantity quantity);
    double getQuantity() const;

private:
    Quantity m_quantity;
    bool m_quantityInOunces;
};

#endif // FOODITEM_H
