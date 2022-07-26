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
#include "libft.h"


static void	ft_putstr_str(char *s, t_print *tp)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_write(s[i], tp, 1);
		i++;
	}
}


void	ft_print_str(va_list arg, t_print *tp)
{
	char	*s;

	s = va_arg(arg, char *);
	if (!s)
	{
		ft_putstr_str("(null)", tp);
	}
	else
		ft_putstr_str(s, tp);
}
