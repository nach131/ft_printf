/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:06:45 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/24 21:42:53 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

//	busca la primera aparición del carácter c (un carácter sin signo)  en los
//	primeros n bytes de la cadena a la que apunta, mediante el argumento str.
//	str - Este es el puntero al bloque de memoria donde se realiza la búsqueda.
//	c 	- Este es el valor que se pasa como un int, pero la función realiza
//		una búsqueda byte por byte utilizando la conversión de caracteres
//		sin firmar de este valor (unsigned)
//	n	- Este es el número de bytes a analizar.


#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*sr;

	sr = (unsigned char *)str;
	while (n)
	{
		if (*sr == (unsigned char)c)
			return (sr);
		else
			sr++;
			n--;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char str[] = "42 Barcelona. Campus de programación más innovador";
// 	//	const	char str[] = "";
// 	char ch;
// 	char *res;

// 	ch = '.';

// 	res = ft_memchr(str, ch, 20);

// 	printf("\nmain:\n str: %s\n char: %c\n", str, ch);
// 	printf("res: %s\n", res);
// }

// main:
//  str: 42 Barcelona. Campus de programación más innovador
//  char: .
// res: . Campus de programación más innovador