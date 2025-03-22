#include "Juice.h"
Juice::Juice(const char ingr[][20], int count, double price) : ingredientCount(count), pricePerLiter(price) {
   for (int i = 0; i < count && i < MAX_INGREDIENTS; i++) {
       std::strcpy(ingredients[i], ingr[i]);
   }
}
void Juice::modifyIngredients(const char newIngr[][20], int count) {
   ingredientCount = (count > MAX_INGREDIENTS) ? MAX_INGREDIENTS : count;
   for (int i = 0; i < ingredientCount; i++) {
       std::strcpy(ingredients[i], newIngr[i]);
   }
}
Juice Juice::operator*(double factor) const {
   double newPrice = pricePerLiter * factor;
   return Juice(ingredients, ingredientCount, newPrice);
}
void Juice::printOn() const {
   std::cout << "Сік: ";
   for (int i = 0; i < ingredientCount; i++) {
       std::cout << ingredients[i];
       if (i < ingredientCount - 1) std::cout << ", ";
   }
   std::cout << " – " << pricePerLiter << " грн/л" << std::endl;
}
