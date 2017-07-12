#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));
	int num1 = 0;
	int num2 = 0;
	const int level1 = 10;
	const int level2 = 5;
	const int level3 = 2;
	
	int count = 0;
	std::cout << "level #1!" << std::endl;
	for (int i = 0; i < level1; ++i)
	{
		int otv = 0;
		num1 = rand() % 9 + 1;
		num2 = rand() % 9 + 1;
		std::cout << num1 << " * " << num2 << " = ";
		std::cin >> otv;
		if (otv == num1 * num2)
		{
			count++;
			std::cout << "^_^" << std::endl;
		}
		else
		{
			std::cout << "Go in school!" << std::endl;
		}
	}

	std::cout << "level #2!" << std::endl;
	for (int i = 0; i < level2; ++i)
	{
		int otv = 0;
		num1 = rand() % 99 + 10;
		num2 = rand() % 99 + 10;
		std::cout << num1 << " * " << num2 << " = ";
		std::cin >> otv;
		if (otv == num1 * num2)
		{
			count++;
			std::cout << "^_^" << std::endl;
		}
		else
		{
			std::cout << "Go in school!" << std::endl;
		}
	}

	std::cout << "level #3!" << std::endl;
	for (int i = 0; i < level3; ++i)
	{
		unsigned long long otv = 0;
		num1 = rand() % 999 + 100;
		num2 = rand() % 999 + 100;
		std::cout << num1 << " * " << num2 << " = ";
		std::cin >> otv;
		if (otv == num1 * num2)
		{
			count++;
			std::cout << "^_^" << std::endl;
		}
		else
		{
			std::cout << "Go in school!" << std::endl;
		}
	}

	std::cout << (count * 100) / (level1 + level2 + level3) << '%' << std::endl;
	system("pause");
	return 0;
}