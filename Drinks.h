#pragma once
#include "JuiceBottle.h"
class Drinks {
private:
   static const int MAX_BOTTLES = 10;
   JuiceBottle* bottles[MAX_BOTTLES];
   int bottleCount;
public:
   Drinks();
   ~Drinks();
   void addBottle(const JuiceBottle& bottle);
   void printAll() const;
   int countBottlesWithIngredient(const char* ingredient) const;
};
