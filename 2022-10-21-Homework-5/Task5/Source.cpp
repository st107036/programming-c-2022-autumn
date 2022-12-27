#include <iostream>
#include <cmath>
int main(int argc[], char* argv[])
{
	int amount = 0;
	int number = 0;
	int mod = 2001;
	int min = 1001;

	std::cin >> amount;
	int array[1000]{0};
	for (int i = 0; i < amount; i++)
	{
		std::cin >> array[i];
	}

	std::cin >> number;

	for (int i = 0; i < amount; i++)
	{
		if (abs(number - array[i]) <= mod)
		{
			mod = abs(number - array[i]);
			if (mod < abs(min - number))
			{
				min = array[i];
			}
			else if (array[i] < min)
			{
				min = array[i];
			}
		}
	}
	std::cout << min << std::endl;

	return EXIT_SUCCESS;
}