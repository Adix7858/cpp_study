#include <iostream>

 

using namespace std;

 

class Animal {

public:

string name;

                Animal()

{

cout<<"Konstruktor klasy Animal"<<endl;

}

Animal (string n) : name(n)

{

cout<<"Konstruktor klasy Animal z parametrem"<<endl;

}

void Przedstaw_sie()

{

    cout<<"Nazywam sie:"<<name<<endl;

}

};

class Cat : public Animal{

    public:

                Cat()

{

cout<<"Konstruktor klasy Cat"<<endl;

}

Cat (string n)

{

name = n;

cout<<"Konstruktor klasy Cat z parametrem"<<endl;

}

};

 

int main() {

Cat kot("Mruczek");

kot.Przedstaw_sie();

return 0;

}

