#include <iostream>
#include <string>

int main (int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	int i = 1;
	while (argv[i])
	{
		int j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] = argv[i][j] - 32;
			j++;
		}
		std::cout << argv[i] << std::endl;
		i++;	
	}
	return (0);
}