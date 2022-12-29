#include <iostream>
int can_get(int n)
{
	if (n == 1 or n == 4)
	{
		return 1;
	}
	else if (n == 0 or n == 2 or n == 3 or n == 5)
	{
		return 0;
	}
	else
	{
		if (can_get(n - 3) == 1)
		{
			return can_get(n - 3);
		}
		else
		{
			return can_get(n - 5);
		}
	}
}
int main(int argc[], char* argv[])
{
	int num = 0;

	std::cin >> num;

	switch (can_get(num))
	{
	case 0:
		std::cout << "NO" << std::endl;
		break;
	case 1:
		std::cout << "YES" << std::endl;
		break;
	}

	return EXIT_SUCCESS;
}