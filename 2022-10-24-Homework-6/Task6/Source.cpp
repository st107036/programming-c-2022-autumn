#include <iostream>
int main(int argc[], char* argv[])
{
	int amount = 0;
	int days[100]{};
	int even_days[100]{};
	int odd_days[100]{};
	int count = 0;

	std::cin >> amount;

	for (int i = 0; i < amount; i++)
	{
		std::cin >> days[i];
		if (days[i] % 2 == 0)
		{
			even_days[i] = days[i];
			count++;
		}
		else
		{
			odd_days[i] = days[i];
			count--;
		}
	}

	for (int i = 0; i < amount; i++)
	{
		if (odd_days[i] != 0)
		{
			std::cout << odd_days[i] << " ";
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < amount; i++)
	{
		if (even_days[i] != 0)
		{
			std::cout << even_days[i] << " ";
		}
	}
	std::cout << std::endl;

	if (count >= 0)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}

	return EXIT_SUCCESS;
}