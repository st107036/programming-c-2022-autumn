#include <iostream>
#include <string>
int main(int argc[], char* argv[])
{
	std::string bin_num;
	int dec_num = 0;
	std::cin >> bin_num;
	for (int i = 0; i < bin_num.length(); i++)
	{
		int digit = (int)bin_num[i] - '0';
		dec_num += pow(2, i) * digit;
	}

	std::cout << dec_num << std::endl;

	return EXIT_SUCCESS;
}