/*
gcc -Wall -Wextra -Werror -o main main06.c ../$FOLDER/ex06/ft_strlen.c
*/
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("9: %d\n", ft_strlen("123456789"));
	printf("0: %d\n", ft_strlen(""));
	return (0);
}
