/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:12:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/30 15:51:12 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"

static void	ft_putnbr_dec(int n, t_print *tp)
{
	if (n < 0)
	{
		if (n == -2147483648)
			ft_putstr("-2147483648", tp);
		else
		{
			ft_write('-', tp);
			n = -n;
		}	
	}
	if (n > 9)
		ft_putnbr_dec(n / 10, tp);
	if (n != -2147483648)
		ft_write ('0' + n % 10, tp);
}

void	ft_print_dec(va_list arg, t_print *tp)
{
	int	d;

	d = va_arg(arg, int);
	ft_putnbr_dec(d, tp);
}
