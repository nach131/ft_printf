/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"

void	funcion(unsigned int i, char *c)
{
	c[0] = c[0] +i;
	printf("%c\n", c[0]);
}

int main(void)
{
	char	str[] = "42 Barcelona";
	char	p[0];

	p[0] = 'A';

	funcion(1, p);
	printf("c: %c\n", p[0]);

	ft_striteri(str, funcion);
}
