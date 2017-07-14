#include <iostream>

int main()
{
	int radius = 0;
	std::cout << "Input a radius: ";
	std::cin >> radius;

	const int size = radius * 2 + 2;
	char** array = new char*[size];
	for (int i = 0; i < size; ++i)
	{
		array[i] = new char[size];
	}

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			array[i][j] = ' ';
		}
	}

	int x = radius;
	array[size / 2][-x + size / 2] = '*';
	array[size / 2][x + size / 2] = '*';
	for (int i = x * -1 + 1; i < x; ++i)
	{
		array[size / 2 - (int)(std::round(std::sqrt(radius * radius - i * i)))][i + size / 2] = '*';
		array[size / 2 - (int)(std::round(std::sqrt(radius * radius - i * i)) * -1)][i + size / 2] = '*';

		for (int j = size / 2 - (int)(std::round(std::sqrt(radius * radius - i * i))) + 1;
			j < size / 2 - (int)(std::round(std::sqrt(radius * radius - i * i)) * -1); ++j)
		{
			array[j][i + size / 2] = '*';
			array[j][size - (i + size / 2)] = '*';
		}
	}

	int h = 0;
	for (int i = 1; array[1][size / 2 + i] != ' '; ++i)
	{
		array[size / 2 - i][1] = '*';
		array[size / 2 + i][1] = '*';

		array[size / 2 - i][size - 1] = '*';
		array[size / 2 + i][size - 1] = '*';
	}

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cout << array[i][j];
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	system("pause");
	return 0;
}
