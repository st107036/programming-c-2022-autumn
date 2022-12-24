#include <iostream>
int main(int argc[], char* argv[])
{
	int amount = 0;
	int pupils[100]{};
	int growth = 0;
	int number = 0;

	std::cin >> amount;

	for (int i = 0; i < amount; i++)
	{
		std::cin >> pupils[i];
	}

	std::cin >> growth;

	for (int i = 0; i < amount; i++)
	{
		if (growth > pupils[i])
		{
			number = i + 1;
			break;
		}
	}
	if (number == 0)
	{
		number = amount + 1;
	}
	
	std::cout << number << std::endl;

	return EXIT_SUCCESS;
}