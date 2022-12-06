#include <iostream>
int main(int argc[], char* argv[])
{
	int sec = 0;
	int current_num = 1;

	std::cin >> sec;

	while (sec > 0)
	{
		for (int i = 0; i < current_num and sec > 0; i++)
		{
			std::cout << current_num << " ";
			sec -= 1;
		}
		current_num++;
	}

	return EXIT_SUCCESS;
}