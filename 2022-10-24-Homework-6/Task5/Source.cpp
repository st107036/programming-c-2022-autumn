#include <iostream>
int main(int argc[], char* argv[])
{
	int amount = 0;
	int array[100000]{};
	int my_array[100000]{};
	int number = 0;

	std::cin >> amount;
	for (int i = 0; i < amount; i++)
	{
		std::cin >> array[i];
		if (array[i] == 1)
		{
			number = i;
		}
	}

	for (int i = 0; array[number + i] != 0; i++)
	{
		my_array[i] = array[number + i];
	}

	for (int i = 0; my_array[i] != 0; i++)
	{
		std::cout << my_array[i] << " ";
	}
	for (int i = 0; i < number; i++)
	{
		std::cout << array[i] << " ";
	}

	return EXIT_SUCCESS;
}
