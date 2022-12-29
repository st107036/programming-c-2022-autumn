#include <iostream>;
int main(int argc[], char* argv[])
{
	int amount1 = 0, amount2 = 0;
	int swap = 0;
	int n = 0, m = 0;
	int b = -1;
	std::cin >> amount1 >> amount2;

	int* array1 = new int[amount1];
	int* array2 = new int[amount2];

	for (int i = 0; i < amount1; i++)
	{
		std::cin >> array1[i];
	}
	for (int i = 0; i < amount2; i++)
	{
		std::cin >> array2[i];
	}

	for (int i = 1; i < amount1; i++)
	{
		for (int j = i; j > 0 and array1[j - 1] > array1[j]; j--)
		{
			swap = array1[j];
			array1[j] = array1[j - 1];
			array1[j - 1] = swap;
		}
	}

	for (int i = 1; i < amount2; i++)
	{
		for (int j = i; j > 0 and array2[j - 1] > array2[j]; j--)
		{
			swap = array2[j];
			array2[j] = array2[j - 1];
			array2[j - 1] = swap;
		}
	}

	while (n < amount1 and m < amount2)
	{
		if (array1[n] == array2[m] and array1[n] != b and array2[m] != b)
		{
			std::cout << array1[n] << " ";
			b = array1[n];
			n++;
			m++;
		}
		else if (array1[n] < array2[m])
		{
			n++;
		}
		else
		{
			m++;
		}
	}

	return EXIT_SUCCESS;
}