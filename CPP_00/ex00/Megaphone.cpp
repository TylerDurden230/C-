#include <iostream>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str && str[i] != 0)
		i++;
	return (i);
}

char ft_toupper(char c)
{
	return ((c >= 97 && c <= 122) ? c - 32 : c);
}

int main (int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else 
	{
		int i = 1;
		while (av[i])
		{
			int j = 0;
			while (j < ft_strlen(av[i]))
			{
				std::cout << ft_toupper(av[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
}