/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:23:38 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/28 16:23:40 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"

void	ft_write_str(const char *c, t_print *tp)
{
if (!tp->error)
{	
	// if (write(1, &c, 1) != 1)
	if (write(1, c, tp->widht) == -1)
		{
			tp->error = 1;
			if(tp->len == 0)
				tp->len = -1;
		}
	else
			tp->len += 1;
	}
}