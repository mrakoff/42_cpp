
#include <iostream>
#include <string>

void	scream(char **av)
{
	int	i = 1;
	int j = 0;

	while (av[i])
	{
		while (av[i][j])
		{
			if (isalpha(av[i][j]) && islower(av[i][j]))
				av[i][j] -= 32;
			std::cout << "" << (char)av[i][j];
			j++;
		}
		i++;
		j = 0;
		std::cout << " ";
	}
	std::cout << "\n";
}

int	main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		scream(av);
	return (0);
}
