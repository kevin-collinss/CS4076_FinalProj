#ifndef FOODITEM_H
#define FOODITEM_H

#include <QString>

class FoodItem

{
public:
    FoodItem(const QString& name);
    virtual QString getName() const;

private:
    QString m_name;
};

class FoodItemWithCalories : public FoodItem
{
public:
    FoodItemWithCalories(const QString& name, int calories);
    int getCalories() const;

private:
    int m_calories;
};

#endif // FOODITEM_H
