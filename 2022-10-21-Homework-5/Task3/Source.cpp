#include <iostream>
int main(int argv[], char* argc[])
{
	int size = 0;
	int max = -1001;
	int min = 1001;

	std::cin >> size;

	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		std::cin >> array[i];
		if (array[i] < min)
		{
			min = array[i];
		}
		if (array[i] > max)
		{
			max = array[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (array[i] == max)
		{
			array[i] = min;
		}
		std::cout << array[i] << " ";
	}
	delete[] array;
	return EXIT_SUCCESS;
}