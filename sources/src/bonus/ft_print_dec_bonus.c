/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 06:33:06 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/11 06:33:09 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

void ft_print_dec_bonus(t_print *tp)
{
	if (tp->num_zero > ft_strlen(tp->to_prev))
	{
		write(1, "es", 2); // esto no esta haciendo...
	}
	else
	{
		tp->to_write = ft_strjoin(tp->to_write, tp->to_prev);
	}
	tp->to_prev = "";
	tp->flag_percent = 0;
}