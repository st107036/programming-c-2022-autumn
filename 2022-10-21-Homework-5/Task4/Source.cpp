#include <iostream>
int main(int argc[], char* argv[])
{
	int number = 0;
	int max = 0;

	std::cin >> number;

	int array[1000]{0};
	for (int i = 0; i < number; i++)
	{
		std::cin >> array[i];
	}

	for (int i = 1; i < number - 1; i++)
	{
		if (max < array[i - 1] + array[i] + array[i + 1])
		{
			max = array[i - 1] + array[i] + array[i + 1];
		}
	}
	if (max < array[number - 1] + array[0] + array[1])
	{
		max = array[number - 1] + array[0] + array[1];
	}
	if (max < array[number - 2] + array[number] + array[0])
	{
		max = array[number - 2] + array[number] + array[0];
	}

	std::cout << max << std::endl;

	return EXIT_SUCCESS;
}