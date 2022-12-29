#include <iostream>
char* stars(char array[], int len)
{
	if (len == 1)
	{
		char* microarray = new char[2]{};
		microarray[0] = array[0];
		return microarray;
	}
	else
	{
		char* new_array = new char[len * 2] {};
		char* inside_array = stars(array, len - 1);
		for (int i = 0; i < len * 2 - 3; i++)
		{
			new_array[i] = inside_array[i];
		}
		new_array[len * 2 - 3] = '*';
		new_array[len * 2 - 2] = array[len - 1];
		return new_array;
	}
}
int main(int argc[], char* argv[])
{
	int n = 0;
	char array[1000]{};
	array[0] = getchar();
	while (array[n] != '\n')
	{
		n++;
		array[n] = getchar();
	}
	std::cout << stars(array, n);

	return EXIT_SUCCESS;
}