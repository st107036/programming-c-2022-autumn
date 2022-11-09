#include<iostream>
int main(int argc, char* argv[])
{
	int a = 1;
	int count = 0;
	
	std::cout << "Enter Sequence:" << std::endl;

	while (a != 0)
	{
		std::cin >> a;
		if (a < 0 and a % 2 != 0)
		{
			count++;
		}
	}
	std::cout << count << std::endl;
	return EXIT_SUCCESS;
}