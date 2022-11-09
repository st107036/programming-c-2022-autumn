#include<iostream>
int main(int argc, char* argv[])
{
	int x = 0;
	int sqrt_x = 0;

	std::cin >> x;
	
	sqrt_x = x * x;

	std::cout << sqrt_x * (sqrt_x + x) + sqrt_x + x + 1 << std::endl;

	return EXIT_SUCCESS;
}