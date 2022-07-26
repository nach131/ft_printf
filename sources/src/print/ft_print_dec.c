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

// void	ft_write(const char *c, t_print *tp, int c_len)
// {
// if (!tp->error)
// {	
// 	// if (write(1, &c, 1) != 1)
// 	if (write(1, &c, c_len) != sizeof(char))
// 		{
// 			tp->error = 1;
// 			tp->len = -1;
// 		}
// 	else
// 		tp->len += 1;
// 	}
// }

// void	ft_putchar_dec(int fd_p, char c)
// {
// 	write(fd_p, &c, 1);
// }

// void	ft_putnbr_fd(int n, int fd)
// {
// 	if (n < 0)
// 	{
// 		if (n == -2147483648)
// 			write (fd, "-2147483648", 11);
// 		else
// 		{
// 			ft_putchar(fd, '-');
// 			n = -n;
// 		}	
// 	}
// 	if (n > 9)
// 		ft_putnbr_fd(n / 10, fd);
// 	if (n != -2147483648)
// 		ft_putchar (fd, ('0' + n % 10));
// }

static int	ft_intlen_dec(int nb)
{
	int	i;
	int	number;
	int	neg;

	i = 0;
	if (!nb)
		return (1);
	if (nb < 0)
	{
		neg = 1;
		number = -nb;
	}
	else
	{
		neg = 0;
		number = nb;
	}
	while (number)
	{
		number /= 10;
		i++;
	}
	return (i + neg);
	return (0);
}

int	ft_print_dec(va_list arg, t_print *tp)
{
	int	d;

	d = va_arg(arg, int);
	ft_putnbr_fd(d, 1);
	tp->len += ft_intlen_dec(d);
	return (1);
}
