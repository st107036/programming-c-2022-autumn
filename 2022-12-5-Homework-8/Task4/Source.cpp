#include <iostream>
void hanoi(int n, int start, int finish)
{
	int mid = 0;
	if (start != 1 and finish != 1)
	{
		mid = 1;
	}
	else if (start != 2 and finish != 2)
	{
		mid = 2;
	}
	else
	{
		mid = 3;
	}

	if (n == 1)
	{
		std::cout << "Disk 1 move from " << start << " to " << finish << std::endl;
	}
	else
	{
		hanoi(n - 1, start, mid);
		std::cout << "Disk " << n << " move from " << start << " to " << finish << std::endl;
		hanoi(n - 1, mid, finish);
	}
	
}
int main(int argc[], char* argv[])
{
	int n = 0;

	std::cin >> n;

	hanoi(n, 1, 2);

	return EXIT_SUCCESS;
}