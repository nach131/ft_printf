/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_xx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:31:51 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/20 17:47:29 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_hex_xx(va_list arg, t_print *tp)
{
	unsigned int	x;
	char			*hexa;
	int				res[128];
	int				i;
	int				count;

	x = va_arg(arg, unsigned int);
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
