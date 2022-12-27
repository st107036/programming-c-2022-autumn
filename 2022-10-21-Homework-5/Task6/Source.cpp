#include <iostream>
int main(int argc[], char* argv[])
{
	int amount = 0;
	int max = 0;
	int number = 0;

	std::cin >> amount;

	int income[1000]{0};
	int taxes[1000]{0};
	for (int i = 0; i < amount; i++)
	{
		std::cin >> income[i];
	}
	for (int i = 0; i < amount; i++)
	{
		std::cin >> taxes[i];
	}

	for (int i = 0; i < amount; i++)
	{
		if (income[i] * taxes[i] * 0.01 > max)
		{
			max = income[i] * taxes[i] * 0.01;
			number = i + 1;
		}
	}

	std::cout << number << std::endl;

	return EXIT_SUCCESS;
}