#include <iostream>
int main(int argc[], char* argv[])
{
	int amount = 0;
	int array[100000]{};
	int shift = 0;
	int my_array[100000]{};

	std::cin >> amount;

	for (int i = 0; i < amount; i++)
	{
		std::cin >> array[i];
	}

	std::cin >> shift;

	if (shift < 0)
	{
		for (int i = abs(shift); i < amount; i++)
		{
			std::cout << array[i] << " ";
		}
		for (int i = 0; i < abs(shift); i++)
		{
			std::cout << array[i] << " ";
		}
	}
	else
	{
		for (int i = amount - shift; i < amount; i++)
		{
			std::cout << array[i] << " ";
		}
		for (int i = 0; i < amount - shift; i++)
		{
			std::cout << array[i] << " ";
		}
	}


	return EXIT_SUCCESS;
}