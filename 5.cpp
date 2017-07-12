#include <iostream>
#include <string.h>

int sum(int* _array, int _n)
{
	int _sum = 0;
	for (int i = 0; i < _n; ++i)
	{
		_sum += _array[i];
	}
	return _sum;
}

double sr(int *_array, int _n)
{
	int _sum = 0;
	for (int i = 0; i < _n; ++i)
	{
		_sum += _array[i];
	}
	return _sum / _n;
}

int main()
{
	std::cout << "Input the number: ";
	int num = 0;
	std::cin >> num;

	int p_num = num;
	int n = 0;
	for (;p_num != 0; ++n)
	{
		p_num /= 10;
	}

	int *array = (int*)malloc(n * sizeof(int));

	int count_of_null = 0;
	for (int i = n - 1; i != 0 ; --i)
	{
		array[i] = (num / (int)pow(10, i)) % 10;

		if (array[i] == 0)
		{
			count_of_null++;
		}
	}

	std::cout << n << std::endl;
	std::cout << sum(array, n) << std::endl; 
	std::cout << sr(array, n) << std::endl;
	std::cout << count_of_null << std::endl;

	system("pause");
	return 0;
}