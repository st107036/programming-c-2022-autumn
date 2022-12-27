#include <iostream>
int main(int argc[], char* argv[])
{
	int count = 0;
	int lim = 1000;
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	std::cin >> a >> b >> c >> d >> e;

	

	for (int i = 0; i < lim; i++)
	{
		int x3 = i * i * i;
		int x2 = i * i;
		int x = i;
		if (i != e and (a * x3 + b * x2 + c * x + d) == 0)
		{
			count++;
		}
	}
	std::cout << count << std::endl;
	return EXIT_SUCCESS;
}