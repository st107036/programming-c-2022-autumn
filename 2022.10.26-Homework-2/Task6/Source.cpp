#include<iostream>
int main(int argc, char* argv[])
{
	int x_queen = 0;
	int y_queen = 0;
	int x_other = 0;
	int y_other = 0;

	std::cin >> x_queen >> y_queen >> x_other >> y_other;

	if (((x_other - y_other == x_queen - y_queen) or (x_other + y_other == x_queen + y_queen)) and x_queen != x_other and y_queen != y_other)
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
	return EXIT_SUCCESS;
}