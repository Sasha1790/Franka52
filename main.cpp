#include "Drinks.h"
int main() {
   const char ingredients1[][20] = {"морква", "яблуко"};
   const char ingredients2[][20] = {"апельсин", "лимон"};
   JuiceBottle bottle1(ingredients1, 2, 40, 150);
   JuiceBottle bottle2(ingredients2, 2, 50, 200);
   Drinks drinks;
   drinks.addBottle(bottle1);
   drinks.addBottle(bottle2);
   std::cout << "Список напоїв:\n";
   drinks.printAll();
   std::cout << "Кількість пляшок з морквою: " << drinks.countBottlesWithIngredient("морква") << std::endl;
   return 0;
}
