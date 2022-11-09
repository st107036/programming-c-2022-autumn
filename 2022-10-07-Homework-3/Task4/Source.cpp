#include<iostream>
int main(int argc, char* argv[])
{
	int number = 0;
	int i = 0;
	int firstnumber = 1;

	std::cout << "Enter the number:" << std::endl;
	std::cin >> number;

	do
	{
		i = firstnumber;
		while (i < number)
		{
			std::cout << i << " ";
			i++;
		}

		while (i >= number - firstnumber + 1)
		{
			std::cout << i << " ";
			i--;
		}
		std::cout << "\n";
		firstnumber++;
	} 
	while (firstnumber <= number);
	return EXIT_SUCCESS;
}