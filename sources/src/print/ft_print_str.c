/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:06:04 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/19 00:49:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"

void	ft_print_str(va_list arg, t_print *tp)
{
	char	*s;

	s = va_arg(arg, char *);
	if (!s)
	{
		ft_putstr("(null)", tp);
	}
	else
		ft_putstr(s, tp);
	// if(tp->widht >= 1)
	// {
	// 	tp->len += tp->widht;
	// }
		// printf("\e[3;31mlen %d \e[0m\n", tp->len);
		// printf("\e[1;34mwidht %d \e[0m\n", tp->widht);
		// // printf("\e[5;32mlen %d\e[0m\n", tp->len);

}
