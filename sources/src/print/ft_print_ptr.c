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

static void	ft_ptr_itoa_hex(unsigned long long nbr, t_print *tp)
{
	int	i;

	i = 0;
	if (nbr > 15)
	{
		ft_ptr_itoa_hex(nbr / 16, tp);
		ft_ptr_itoa_hex(nbr % 16, tp);
		i++;
	}
	else
	{
		if (nbr <= 9)
			ft_write(nbr + '0', tp);
		else
			ft_write(nbr - 10 + 'a', tp);
	}
}

void	ft_print_ptr(va_list arg, t_print *tp)
{
	unsigned long long	nbr;

	nbr = va_arg(arg, unsigned long long );
	ft_putstr("0x", tp);
	ft_ptr_itoa_hex(nbr, tp);
}
