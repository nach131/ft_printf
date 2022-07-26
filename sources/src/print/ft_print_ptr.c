/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:36:02 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/21 16:37:57 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

void	ft_write_ptr(char c, t_print *tp)
{
if (!tp->error)
{	
	// if (write(1, &c, 1) != 1)
	if (write(1, &c, sizeof(char)) != sizeof(char))
		{
			tp->error = 1;
			tp->len = -1;
		}
	else
		tp->len += 1;
	}
}


static void	ft_ptr_itoa_hex(unsigned long long nbr, t_print *tp)
{
	int	i;

	i = 0;
	if (nbr > 15)
	{
		ft_ptr_itoa_hex(nbr / 16, tp);
		ft_ptr_itoa_hex(nbr % 16, tp);
		i++;
		// tp->len += i;
	}
	else
	{
		if (nbr <= 9)
			// ft_putchar_fd(nbr + '0', 1);
			ft_write_ptr(nbr + '0', tp);
		else
			// ft_putchar_fd(nbr - 10 + 'a', 1);
			ft_write_ptr(nbr - 10 + 'a', tp);
	}
}

int	ft_print_ptr(va_list arg, t_print *tp)
{
	unsigned long long	nbr;

	nbr = va_arg(arg, unsigned long long );
	write(1, "0x", 2);
	ft_ptr_itoa_hex(nbr, tp);
	tp->len += 2;
	return (1);
}
