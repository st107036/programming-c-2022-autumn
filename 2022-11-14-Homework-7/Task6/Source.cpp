#include <iostream>	
int main(int argc[], char* argv[])
{
	int str = 0;
	int clmn = 0;
	

	std::cin >> str >> clmn;

	int** array;
	array = new int* [str];
	for (int i = 0; i < str; i++)
	{
		array[i] = new int[clmn];
	}

	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < clmn; j++)
		{
			std::cin >> array[i][j];
		}
	}

	int** array2;
	array2 = new int* [str];
	for (int i = 0; i < str; i++)
	{
		array2[i] = new int[clmn];
	}

	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < clmn; j++)
		{
			std::cin >> array2[i][j];
		}
	}
	
	std::cout << std::endl;

	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < clmn; j++)
		{
			std::cout << array[i][j] + array2[i][j] << " ";
		}
		std::cout << std::endl;
	}


	for (int i = 0; i < str; i++)
	{
		delete array[i];
	}
	delete[] array;
	for (int i = 0; i < str; i++)
	{
		delete array2[i];
	}
	delete[] array2;

	return EXIT_SUCCESS;
}