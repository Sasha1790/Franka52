#include "JuiceBottle.h"
#include <iostream>
JuiceBottle::JuiceBottle(const char ingr[][20], int count, double price, int vol)
   : Juice(ingr, count, price), volume(vol > 200 ? 200 : vol) {}
bool JuiceBottle::operator<(const JuiceBottle& other) const {
   return ingredientCount < other.ingredientCount;
}
void JuiceBottle::printOn() const {
   Juice::printOn();
   std::cout << "Об'єм: " << volume << " мл" << std::endl;
}
