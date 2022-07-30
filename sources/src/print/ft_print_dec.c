/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:12:40 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/20 17:50:58 by nmota-bu         ###   ########.fr       */
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
			{
				ft_putstr("-2147483648", tp);
				// ft_write_str("-2147483648", tp);
			// tp->len += 1;
				}
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
	// if (tp->len >= tp->widht)
	// 	{
	// 		tp->len += tp->widht;
	// 		printf("\e[1;33mlen %d \e[0m\n", tp->len);
	// 		printf("\e[1;33mwidht %d \e[0m\n", tp->widht);
	// 	}

		// 	printf("\e[3;31mlen %d \e[0m\n", tp->len);
		// printf("\e[1;34mwidht %d \e[0m\n", tp->widht);
	// ft_putnbr_fd(d, 1);
	// tp->len += ft_intlen_dec(d);
}
