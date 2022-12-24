#include <iostream>
int main(int argc[], char* argv[])
{
	int limit = 0;
	int left1 = 0, right1 = 0;
	int left2 = 0, right2 = 0;
	int array[1000]{};
	int subarray[1000]{};
	int my_array[1000]{};
	int number = 1;

	std::cin >> limit >> left1 >> right1 >> left2 >> right2;

	for (int i = 0; i < limit; i++)
	{
		array[i] = i + 1;
		subarray[i] = i + 1;
		my_array[i] = i + 1;
	}
	
	for (int i = left1; i <= right1; i++)
	{
		subarray[i - 1] = array[right1 - number];
		number++;
	}
	number = 1;

	for (int i = 0; i < limit; i++)
	{
		my_array[i] = subarray[i];
	}

	for (int i = left2; i <= right2; i++)
	{
		my_array[i - 1] = subarray[right2 - number];
		number++;
	}

	for (int i = 0; i < limit; i++)
	{
		std::cout << my_array[i] << " ";
	}

	return EXIT_SUCCESS;
}