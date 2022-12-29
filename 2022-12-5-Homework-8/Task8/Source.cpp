#include <iostream>
char* quotes(char array[], int finish, int start)
{
	if (finish - start == 1)
	{
		char* microarray = new char[5] {};
		microarray[0] = '(';
		microarray[1] = array[start];
		microarray[2] = array[finish];
		microarray[3] = ')';
		return microarray;
	}
	else if (finish - start == 0)
	{
		char* microarray = new char[4] {};
		microarray[0] = '(';
		microarray[1] = array[finish];
		microarray[2] = ')';
		return microarray;
	}
	else
	{
		char* new_array = new char[(finish - start + 1) * 2 + 2] {};
		char* inside_array = quotes(array, finish - 1, start + 1);
		for (int i = 2; i < (finish - start + 1) * 2 - 1 - (finish - start) % 2; i++)
		{
			new_array[i] = inside_array[i - 2];
		}
		new_array[(finish - start + 1) * 2 - 1 - (finish - start) % 2] = array[finish];
		new_array[(finish - start + 1) * 2 - (finish - start) % 2] = ')';
		new_array[0] = '(';
		new_array[1] = array[start];
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
	std::cout << quotes(array, n - 1, 0);

	return EXIT_SUCCESS;
}