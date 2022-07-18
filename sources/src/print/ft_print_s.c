/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:06:04 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/19 00:27:15 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

const char	*ft_print_str(va_list arg, t_print *tp)
{
	char	*s = va_arg(arg, char *);
	if (!s)
	{
		write(1, "(null)", 6);
		tp->len += 6;
	}
	else
	{
		ft_putstr_fd(s, 1);
		tp->len += ft_strlen(s);
	}
	return (s);
}