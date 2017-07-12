#include <iostream>

int main()
{
	int max_lenth = 21;
	int midle = max_lenth / 2;
	int step = 0;

	while (step <= midle)
	{
		for (int i = 0; i < max_lenth; ++i)
		{
			if (i >= midle - step && i <= midle + step)
			{
				std::cout << '*';
			}
			else
			{
				std::cout << ' ';
			}
		}
		step++;
		std::cout << std::endl;
	}

	step -= 2;
	while (step >= 0)
	{
		for (int i = 0; i < max_lenth; ++i)
		{
			if (i >= midle - step && i <= midle + step)
			{
				std::cout << '*';
			}
			else
			{
				std::cout << ' ';
			}
		}
		step--;
		std::cout << std::endl;
	}

	system("pause");
	return 0;
}