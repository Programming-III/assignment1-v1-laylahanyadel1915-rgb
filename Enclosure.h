#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include <iostream>
#include "Animal.h"
#include <string>
using namespace std;

class Enclosure :: public Animal{
private:
    Animal* Animal= Animal*a;
    int capacity;
    int currentCount;

public:
    void addAnimal(Animal* a);
    void displayAnimals();
~Enclosure();


};

#endif // ENCLOSURE_H_INCLUDED
