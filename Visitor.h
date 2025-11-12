#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Vistor{
private:
    string vistorName;
    int ticketsBought;
    public:
    void displayInto();
~Vistor();
};

#endif // VISTOR_H_INCLUDED
