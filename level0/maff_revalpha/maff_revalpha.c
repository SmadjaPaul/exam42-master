#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char	a;
	char	b;

	a = 'z';
	b = 'Y';
	while (a >= 'a' && b >= 'A')
	{
		ft_putchar(a);
		ft_putchar(b);
		a -= 2;
		b -= 2;
	}
	ft_putchar('\n');
	return (0);
}
