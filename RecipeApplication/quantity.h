#ifndef QUANTITY_H
#define QUANTITY_H

struct Quantity {
    union {
        double ounces;
        double grams;
    };
    bool isOunces;

    Quantity(double value, bool ounces);
};

#endif // QUANTITY_H
