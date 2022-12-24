#include <iostream>
int main(int argc[], char* argv[])
{
	int amount = 0;
	int array[100]{};
	int max = -101;
	int num_of_max = 0;
	int min = 101;
	int num_of_min = 0;
	int mult = 1;
	int sum = 0;

	std::cin >> amount;

	for (int i = 0; i < amount; i++)
	{
		std::cin >> array[i];

		if (max < array[i])
		{
			max = array[i];
			num_of_max = i;
		}
		if (min > array[i])
		{
			min = array[i];
			num_of_min = i;
		}
		if (array[i] > 0)
		{
			sum += array[i];
		}
	}
	if (num_of_min < num_of_max)
	{
		for (int i = num_of_min + 1; i < num_of_max; i++)
		{
			mult *= array[i];
		}
	}
	else
	{
		for (int i = num_of_max + 1; i < num_of_min; i++)
		{
			mult *= array[i];
		}
	}

	std::cout << sum << " " << mult << std::endl;

	return EXIT_SUCCESS;
}