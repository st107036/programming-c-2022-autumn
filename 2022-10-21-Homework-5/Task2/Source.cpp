#include<iostream>
int main(int argc, char* argv[])
{
	int size = 0;
	int left = 0;
	int right = 0;
	int max = -1001;
	int number = 0;

	std::cin >> size;

	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		std::cin >> array[i];
	}
	
	std::cin >> left >> right;

	for (int i = left - 1; i < right; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			number = i + 1;
		}
	}

	std::cout << max << " " << number << std::endl;

	delete[] array;
	return EXIT_SUCCESS;
}