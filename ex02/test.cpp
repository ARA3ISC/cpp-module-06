#include <iostream>

class Base
{
	public : virtual ~Base() {}
};

class A: public Base 
{

};

class B: public Base 
{

};

int main()
{
	Base* b = new B;

	A* a = dynamic_cast<A*>(b);

	if (a)
		std::cout << "Done\n";
	else	
		std::cout << "Error\n";
}
