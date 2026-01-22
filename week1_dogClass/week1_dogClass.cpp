#include <iostream>
#include <string.h>

using namespace std;

// Dog Class allows to get and set Name, Age, & Breed; also allows to bark.
class Dog {
private:
    string name, breed;
    int age;
public:
    void setName(string str);
    void setAge(int num);
    void setBreed(string str);
    string getName();
    int getAge();
    string getBreed();
    void bark();
};

// Sets Name to Parameter
void Dog::setName(string str) {
    name = str;
}

// Sets Age to Parameter
void Dog::setAge(int num) {
    age = num;
}

// Sets Bree to Parameter
void Dog::setBreed(string str) {
    breed = str;
}

// Gets Name from Dog Class
string Dog::getName() {
    return name;
}

// Gets Age from Dog Class
int Dog::getAge() {
    return age;
}

// Gets Breed from Dog Class
string Dog::getBreed() {
    return breed;
}

// Outputs Bark String
void Dog::bark() {
    cout << "Woof! Woof!" << endl;
}

// Initializes Dog Class, gives it Name, Age, & Breed. Prints out all varaibles of dog class and changes breed before barking.
int main()
{
    Dog newDog;
    newDog.setName("Star Destroyer");
    newDog.setAge(5);
    newDog.setBreed("Chihuahua");

    cout << "Name: " << newDog.getName() << "\nAge: " << newDog.getAge() << "\nBreed: " << newDog.getBreed() << endl;

    newDog.setBreed("Corgi");
    newDog.bark();
}
