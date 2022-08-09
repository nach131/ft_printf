/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 11:57:39 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/09 11:57:41 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

static int ft_len(const char *s)
{
	int i;

	i = 0;
	if (!s)
		return (0);
	while (*s != 'd') // AKI TODAS LAS VARIABLES
	{
		s++;
		i++;
	}
	return (i);
}

void ft_read_bonus(t_print *tp, va_list arg)
// void	ft_read_bonus(t_print *tp, const char *format, va_list arg)
{
	if (tp->zero)
	{
		tp->zero = 0;
		tp->to_arg = ft_strjoin(tp->to_arg, ft_char_to_str(tp->format, ft_len(tp->format)));
		tp->num_zero = ft_atoi(tp->to_arg);
		tp->to_arg = "";
		while (*tp->format && *tp->format != 'd') // AKI LAS DEMAS...
			tp->format++;
	}
	ft_search_arg(arg, tp);
}