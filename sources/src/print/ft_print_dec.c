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
#include "libft.h"

static void	ft_write_read(const char *c, t_print *tp)
{
if (!tp->error)
{	
	// if (write(1, &c, 1) != 1)
	if (write(1, c, tp->widht) == -1)
		{
			tp->error = 1;
			if(tp->len == 0)
				tp->len = -1;
		}
	else
			tp->len += 1;
	}
}

void	ft_putnbr_dec(int n, t_print *tp)
{
	if (n < 0)
	{
		if (n == -2147483648)
			ft_write_read ("-2147483648", tp);
		else
		{
			ft_write_read("-", tp);
			n = -n;
		}	
	}
	if (n > 9)
		ft_putnbr_dec(n / 10, tp);
	if (n != -2147483648)
		ft_write ('0' + n % 10, tp);
}

// static int	ft_intlen_dec(int nb)
// {
// 	int	i;
// 	int	number;
// 	int	neg;

// 	i = 0;
// 	if (!nb)
// 		return (1);
// 	if (nb < 0)
// 	{
// 		neg = 1;
// 		number = -nb;
// 	}
// 	else
// 	{
// 		neg = 0;
// 		number = nb;
// 	}
// 	while (number)
// 	{
// 		number /= 10;
// 		i++;
// 	}
// 	return (i + neg);
// 	return (0);
// }

int	ft_print_dec(va_list arg, t_print *tp)
{
	int	d;

	d = va_arg(arg, int);
	ft_putnbr_dec(d, tp);
	// ft_putnbr_fd(d, 1);
	// tp->len += ft_intlen_dec(d);
	return (1);
}
