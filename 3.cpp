#include <iostream>

int main()
{
	char line[10]{0};
	char newline[10]{0};
	std::cin >> line;

	int j = 0;
	for (int i = 0; line[i] >= '0' && line[i] <= '9'; ++i)
	{
		if ((line[i] - '0') != 3 && (line[i] - '0') != 6)
		{
			newline[j] = line[i];
			j++;
		}
	}

	bool flag = false;
	for (int i = 0; newline[i] >= '0' && newline[i] <= '9'; ++i)
	{
		if (newline[i] - '0' != 0)
		{
			flag = true;
		}

		if (flag)
		{
			std::cout << newline[i];
		}
	}

	std::cout << std::endl;
	system("pause");
	return 0;
}