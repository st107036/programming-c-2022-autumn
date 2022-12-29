#include <iostream>
char* del(char array[], int finish, int start)
{
	if (finish - start == 1)
	{
		if (array[finish] == array[start])
		{
			char* microarray = new char[1] {};
			return microarray;
		}
		else
		{
			char* microarray = new char[3] {};
			microarray[0] = array[start];
			microarray[1] = array[finish];
			return microarray;
		}
	}
	else if (finish - start == 0)
	{
		char* microarray = new char[2] {};
		microarray[0] = array[finish];
		return microarray;
	}
	else
	{
		char* inside_array = del(array, finish - 1, start + 1);
		int len = 0;
		while (inside_array[len] != '\0')
		{
			len++;
		}
		if (array[finish] == array[start])
		{
			return inside_array;
		}
		else
		{
			char* new_array = new char[len + 3];
			for (int i = 1; i <= len; i++)
			{
				new_array[i] = inside_array[i - 1];
			}
			new_array[0] = array[start];
			new_array[len + 1] = array[finish];
			new_array[len + 2] = '\0';
			return new_array;
		}
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
	std::cout << del(array, n - 1, 0);

	return EXIT_SUCCESS;
}