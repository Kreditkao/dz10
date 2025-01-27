#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <iostream>
#include <string>
using namespace std;

class Ingredient {
public:
    string name;
    int cookingTime;

    Ingredient(string n, int t) : name(n), cookingTime(t) {}

    bool operator<(const Ingredient& other) const {
        // Для пріоритетної черги, менший час приготування означає вищий пріоритет
        return cookingTime > other.cookingTime;
    }

    void show() const {
        cout << name << " (" << cookingTime << " seconds)" << " ";
    }
};

#endif
