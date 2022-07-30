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

void	ft_print_hex(va_list arg, t_print *tp, char *hexa)
{
	unsigned int	x;
	int				res[128];
	int				i;

	x = va_arg(arg, unsigned int);
	i = 0;
	while (x >= 16)
	{
		res[i] = hexa[x % 16];
		x = x / 16;
		i++;
	}
	res[i] = hexa[x];
	while (i >= 0)
	{
		ft_write(res[i], tp);
		i--;
	}
}
