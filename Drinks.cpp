#include "Drinks.h"
#include <cstring>
Drinks::Drinks() : bottleCount(0) {}
Drinks::~Drinks() {
   for (int i = 0; i < bottleCount; i++) {
       delete bottles[i];
   }
}
void Drinks::addBottle(const JuiceBottle& bottle) {
   if (bottleCount < MAX_BOTTLES) {
       bottles[bottleCount++] = new JuiceBottle(bottle);
   }
}
void Drinks::printAll() const {
   for (int i = 0; i < bottleCount; i++) {
       bottles[i]->printOn();
   }
}
int Drinks::countBottlesWithIngredient(const char* ingredient) const {
   int count = 0;
   for (int i = 0; i < bottleCount; i++) {
       for (int j = 0; j < bottles[i]->ingredientCount; j++) {
           if (std::strcmp(bottles[i]->ingredients[j], ingredient) == 0) {
               count++;
               break;
           }
       }
   }
   return count;
}
