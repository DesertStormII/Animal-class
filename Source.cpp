#include <iostream>

using namespace std;

class Animal {
public:
	void MakeSound() {
		cout << " Can make sound like:" << endl;
	}
};
class Dog :public Animal{
public:
	void NameDog() {
		cout << " And I am dog" << endl;
	}
	void Bark() {
		cout << "  Woof!Woof!Woof!" << endl;
	}
};
class Cat :public Animal {
public:
	void NameCat() {
		cout << " And I am cat" << endl;
	}
	void Meow() {
		cout << "  Meow!Meow!Meow!" << endl;
	}
};
int main()
{
	Animal exp1;
	Cat exp2;
	Dog exp3;
	cout << "      Animals." << endl;
	exp1.MakeSound();
	exp3.Bark();
	exp3.NameDog();
	exp1.MakeSound();
	exp2.Meow();
	exp2.NameCat();

	return 0;
}