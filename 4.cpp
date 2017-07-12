#include <iostream>

int func(int _i)
{
	int pov = 0;
	int array[4];
	array[0] = _i / 1000; 
	array[1] = _i / 100 % 10;
	array[2] = _i / 10 % 10;
	array[3] = _i % 10;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = i + 1; j < 4; ++j)
		{
			if (array[i] == array[j])
			{
				pov++;
			}
		}
	}

	if (pov == 1)
	{
		std::cout << array[0] << ' ';
		std::cout << array[1] << ' ';
		std::cout << array[2] << ' ';
		std::cout << array[3] << ' ';
		std::cout << std::endl;
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int count = 0;
	for (int i = 1000; i <= 9999; ++i)
	{
		count += func(i);
	}

	std::cout << count << std::endl;
	system("pause");
	return 0;
}