#pragma once
#include "Juice.h"
class JuiceBottle : public Juice {
private:
   int volume; // Об'єм в мл (максимум 200 мл)
public:
   JuiceBottle(const char ingr[][20], int count, double price, int vol);
   bool operator<(const JuiceBottle& other) const;
   void printOn() const;
};
