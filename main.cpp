#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

class Animal{

void Animal(){
this->name= "";
this->age= 0;
this->isHungry= False;
}
void Animal(string name, int age, bool isHungry){
this->name= name;
this->age= age;
this->isHungry= isHungry;
}
~Animal(){
};
void display(){
cout<< name >> "(Age:" << age << isHungry();
}

void feed(){
}
};
class Enclosure :: public Animal{
  void  Enclosure(){
        this->capacity = 0;
        this->currentCount =0;

    }

  void  Enclosure(Animal* a , int capacity, int currentCount){
     this->capacity = capacity;
        this->currentCount =currentCount;
    }
    void addAnimal(Animal* a ){

        }
        void displayAnimals(){
        cout<< Animal* a << endl;

        }
    ~Enclosure(){
        
    }
        };

class Visitor{

    void Visitor(){
    this->visitorName= "";
    this-> ticketsBought= 0;
    }

    void Visitor(string visitorName, int ticketsBought){
    this->visitorName= visitorName;
    this-> ticketsBought= ticketsBought;
    }


    void displayInfo(){
    cout<< "Visitor Info:" << endl;
    cout << "Name:" << visitorName << endl;
    cout << "Tickets Bought: " << ticketsBought << endl;
    }
~Vistor(){
    
}

};

 int main(){
    Animal1= Animal(Lion ,5, isHungry(True));
    Animal2= Animal(Parrot ,2, isHungry(False));
    Animal3= Animal(Snake ,3,Venomous, isHungry(True));
     Visitor1= Visitor("Sarah Ali", 3);
     display(Animal1);
     display(Animal2);
     display(Animal3);
     displayInfo(Visitor1);
 return 0;}

#endif // ENCLOSURE_H_INCLUDED
