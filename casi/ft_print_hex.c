/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:31:51 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/20 17:29:54 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_hex(va_list arg, const char *format, t_print *tp)
{
	unsigned	int x;
	char		*hexa;
	int			res[128];
	int			i;
	int			count;

	x = va_arg(arg, unsigned int);
	if (*format == 'x')
		hexa = "0123456789abcdef";
	else if (*format == 'X')
		hexa = "0123456789ABCDEF";
	i = 0;
	while (x >= 16)
	{
		res[i] = hexa[x % 16];
		x = x / 16;
		i++;
	}
	res[i] = hexa[x];
	count = 0;
	while (i >= 0)
	{
		ft_putchar_fd(res[i], 1);
		i--;
		count++;
	}
	tp->len += count;
	return (1);
}