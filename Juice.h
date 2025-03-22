#pragma once
#include <iostream>
#include <cstring>
class Juice {
protected:
   static const int MAX_INGREDIENTS = 5; 
   char ingredients[MAX_INGREDIENTS][20]; 
   int ingredientCount;
   double pricePerLiter;
public:
   Juice(const char ingr[][20], int count, double price);
   void modifyIngredients(const char newIngr[][20], int count);
   Juice operator*(double factor) const;
   void printOn() const;
};
