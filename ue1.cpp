#include <iostream>

int main(int argc, char const *argv[])
{
	int sum,a,b;

	std::cout << "Please enter integers a and b:";
	std::cin >> a >> b;
	sum = a + b;
	std::cout << "The sum of a and b is " << sum << std::endl; 
	return 0;
}