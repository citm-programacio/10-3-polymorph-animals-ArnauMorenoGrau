/*
Make a class “Animal” with the abstract method speak()

Make classes “dog” and “cat” that inherit from animal.

Override the speak method

Make the objects and call speak from main

*/
#include <iostream>
using namespace std;

class Animal
{
private:
public:

	virtual void habla() const = 0;
	virtual void come() const = 0;

	virtual ~Animal() {}

};

class Dog : public Animal {

public:
	void habla() const override {
		cout << "GUAU GUAU" << endl;
	}
	void come() const override {
		cout << "* come hueso *" << endl;
	}
};


class Cat : public Animal {

public:
	void habla()const  override {
		cout << "MIAAAAAU" << endl;
	}
	void come() const override {
		cout << "* come pescado *" << endl;
	}
};

int main() {
	// Create objects of Dog and Cat
	Dog dog;
	Cat cat;

	// Call the speak method from each object
	dog.habla();  // Outputs: Woof!
	cat.habla();  // Outputs: Meow!

	dog.come();  
	cat.come();

	/*delete dog;
	delete cat;*/

	return 0;
}
