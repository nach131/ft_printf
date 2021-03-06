/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:31:51 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/21 19:59:45 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

int	ft_print_hex(va_list arg, t_print *tp, char *hexa)
{
	unsigned int	x;
	int				res[128];
	int				i;
	int				count;

	x = va_arg(arg, unsigned int);
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
