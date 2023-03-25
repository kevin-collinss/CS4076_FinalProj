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
    FoodItemWithQuantity(const QString& name, const Quantity& quantity);
    const Quantity& getQuantity() const;

private:
    Quantity m_quantity;
};

#endif // FOODITEM_H
