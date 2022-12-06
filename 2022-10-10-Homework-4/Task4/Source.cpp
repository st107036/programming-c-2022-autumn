#include <iostream>
int main(int argc[], char* argv[])
{
	int count = 0;
	int lim = 1000;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	std::cin >> a >> b >> c >> d >> e;

	for (int i = 0; i < lim; i++)
	{
		if (i != e and (a * pow(i, 3) + b * pow(i, 2) + c * i + d) == 0)
		{
			count++;
		}
	}
	std::cout << count << std::endl;
	return EXIT_SUCCESS;
}