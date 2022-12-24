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

	int* sum_str;
	sum_str = new int[str]();
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < clmn; j++)
		{
			sum_str[i] += array[i][j];
		}
	}

	int* sum_clmn;
	sum_clmn = new int[clmn]();
	for (int i = 0; i < clmn; i++)
	{
		for (int j = 0; j < str; j++)
		{
			sum_clmn[i] += array[j][i];
		}
	}

	for (int i = 0; i < str; i++)
	{
		std::cout << sum_str[i] << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < clmn; i++)
	{
		std::cout << sum_clmn[i] << " ";
	}

	std::cout << std::endl;
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