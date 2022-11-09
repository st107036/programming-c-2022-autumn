#include<iostream>
int main(int argc, char* argv[])
{
	int number = 0;
	int i = 0;
	int firstnumber = 1;
	int endline = 0;

	std::cout << "Enter the number:" << std::endl;
	std::cin >> number;
	endline = number;

	do
	{
		i = firstnumber;
		while (i <= endline)
		{
			std::cout << i << " ";
			i++;
		}
		std::cout << "\n";
		firstnumber++;
		endline++;
	} 
	while (endline < number * 2);
	return EXIT_SUCCESS;
}