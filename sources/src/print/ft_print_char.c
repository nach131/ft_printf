/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:29:49 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/19 17:31:32 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

int ft_print_char(va_list arg, t_print *tp)
{
		int c;

	c = va_arg(arg, int);

	ft_putchar_fd(c, 1);
	tp->len += 2;
	return (1);
}
// {
// 	int c;

// 	c = va_arg(arg, int);

// 	if (write(1, &c, sizeof(char)) != sizeof(char))
// 	{
// 		tp->len += 1;
// 		return (-1);
// 	} 
// 	else
// 	{
// 		tp->len += 2;
// 		return (1);
// 	} 
// }

// {
// 	int c;

// 	c = va_arg(arg, int);
// 	if(!c)
// 	{
// 		tp->len += 1;
// 		return (-1);
// 	} 
// 	else
// 	{
// 		// ft_putchar_fd(c, 1);
// 		write(1, &c, 1);
// 		tp->len += 2;
// 		return (1);
// 	}
// }
