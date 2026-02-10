#include <iostream> //printar
#include <cctype> //toupper

int	main (int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j], j++)
				argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i] << std::endl;
		}
	}
	return (0);
}
