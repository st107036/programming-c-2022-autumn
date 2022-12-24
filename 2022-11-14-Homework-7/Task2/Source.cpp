#include <iostream>	
int main(int argc[], char* argv[])
{
	int n = 0;
	int subnum = 0;

	std::cin >> n;

	int** array;
	array = new int* [n];
	for (int i = 0; i < n; i++)
	{
		array[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> array[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0 + i; j < n; j++)
		{
			subnum = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = subnum;
		}
	}

	std::cout << std::endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}


	for (int i = 0; i < n; i++)
	{
		delete array[i];
	}
	delete[] array;

	return EXIT_SUCCESS;
}