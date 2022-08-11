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
#include "libft.h"

static void ft_putnbr_dec(int n, t_print *tp)
{
	char number;

	if (n < 0)
	{
		if (n == -2147483648)
			{
				// tp->to_prev = ft_strjoin(tp->to_prev, "-2147483648");
				tp->to_prev = ft_strjoin(tp->to_prev, "2147483648");
				tp->flag_negative = 1;
			}
		else
		{
			// tp->to_prev = ft_strjoin(tp->to_prev, ft_char_to_str("-", 1));
				tp->flag_negative = 1;
			// tp->len -= 1;
			n = -n;
			// 	ft_rep_write('0', tp);
		}
	}
	if (n > 9)
		ft_putnbr_dec(n / 10, tp);
	if (n != -2147483648)
	{
		number = '0' + n % 10;
		tp->to_prev = ft_strjoin(tp->to_prev, ft_char_to_str(&number, 1));
	}
}

void ft_print_dec(va_list arg, t_print *tp)
{
	int d;

	d = va_arg(arg, int);
	ft_putnbr_dec(d, tp);
	ft_print_dec_bonus(tp);
	tp->format++;
}
