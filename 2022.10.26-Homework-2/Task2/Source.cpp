#include<iostream>
int main(int argc, char* argv[])
{
	int number = 0;
	std::cin >> number;
	if (number % 400 == 0 or number % 4 == 0 and number % 100 != 0)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}
	return EXIT_SUCCESS;
}