
#include "Base.hpp"

Base::~Base() {}

Base* generate(void)
{
	srand(time(0));
	// std::cout << rand() % 3 + 1 << std::endl;

	switch (rand() % 3)
	{
	case 0:
		return new A();
		break;
	case 1:
		return new B();
		break;
	case 2:
		return new C();
		break; 
	}
	return new Base();
}

void identify(Base* p)
{
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "P is pointing to an" << CYAN << " A object" << RESET << std::endl;
	else if (b)
		std::cout << "P is pointing to a" << GREEN << "  B object" << RESET << std::endl;
	else if (c)
		std::cout << "P is pointing to a" << RED << "  C object" << RESET << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "P is pointing to an" << CYAN << " A object" << RESET << std::endl;		
	}
	catch(const std::exception& e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "P is pointing to a" << GREEN << "  B object" << RESET << std::endl;
			
		}
		catch(const std::exception& e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "P is pointing to a" << RED << "  C object" << RESET << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		
	}
	
}