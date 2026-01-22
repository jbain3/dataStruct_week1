#include <iostream>
#include <string.h>

using namespace std;

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

void Dog::setName(string str) {
    name = str;
}

void Dog::setAge(int num) {
    age = num;
}

void Dog::setBreed(string str) {
    breed = str;
}

string Dog::getName() {
    return name;
}

int Dog::getAge() {
    return age;
}

string Dog::getBreed() {
    return breed;
}

void Dog::bark() {
    cout << "Woof! Woof!" << endl;
}

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
