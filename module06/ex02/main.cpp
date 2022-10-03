#include "Base.hpp"

int main(void)
{
	Base *test;

	test = generate();

	identify(test);
	identify(*test);

	delete test;
	return (0);
}