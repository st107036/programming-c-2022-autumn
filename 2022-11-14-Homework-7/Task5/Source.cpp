#include <iostream>	
int main(int argc[], char* argv[])
{
	int str = 0;
	int clmn = 0;
	int subnum = 0;

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

	for (int i = 0; i < str / 2; i++)
	{
		for (int j = 0; j < clmn; j++)
		{
			subnum = array[i][j];
			array[i][j] = array[str - i - 1][j];
			array[str - i - 1][j] = subnum;
		}
	}
	std::cout << std::endl;

	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < clmn; j++)
		{
			std::cout << array[i][j] << " ";
		}
		std::cout << std::endl;
	}


	for (int i = 0; i < str; i++)
	{
		delete array[i];
	}
	delete[] array;

	return EXIT_SUCCESS;
}