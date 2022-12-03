#include <iostream>
int main(int argc[], char* argv[])
{
	int all_days = 0;
	int max = 0;
	int days_to_max = 0;
	int cm_to_max = 0;
	int profit = 0;
	int count = 0;

	std::cin >> all_days;

	int* array = new int[all_days];
	for (int i = 0; i < all_days; i++)
	{
		std::cin >> array[i];
	}

	while (count != all_days)
	{
		for (int i = count; i < all_days; i++)
		{
			if (max < array[i])
			{
				max = array[i];
				days_to_max = i + 1;
				cm_to_max = i - count + 1;
			}
		}
		profit += cm_to_max * max;
		count = days_to_max;
		max = 0;
	}

	std::cout << profit << std::endl;
	
	delete[] array;
	return EXIT_SUCCESS;
}