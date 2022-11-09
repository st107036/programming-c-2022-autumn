#include<iostream>
int main(int argc, char* argv[])
{
	int child = 0;
	int apple = 0;
	std::cin >> child >> apple;

	std::cout << apple % child << std::endl;

	return EXIT_SUCCESS;
}