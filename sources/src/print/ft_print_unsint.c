/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:06:57 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/20 20:26:50 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"
#include "ft_printf.h"

static void	ft_u_itoa_hex(unsigned int nbr, t_print *tp)
{
	int	i;

	i = 0;
	if (nbr > 9)
	{
		ft_u_itoa_hex(nbr / 10, tp);
		// ft_putchar_fd(nbr % 10 + '0', 1);
		ft_write(nbr % 10 + '0', tp);
		i++;
		// tp->len += i;
	}
	else
		// ft_putchar_fd(nbr + '0', 1);
		ft_write(nbr + '0', tp);
}

void	ft_print_unsint(va_list arg, t_print *tp)
{
	unsigned long	nbr;

	nbr = va_arg(arg, unsigned int );
	ft_u_itoa_hex(nbr, tp);
	// tp->len += 1;
}
