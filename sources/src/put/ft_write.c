/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 00:42:28 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/25 00:46:46 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"

void	ft_write(char c, t_print *tp)
{
if (!tp->error)
{	
	// if (write(1, &c, 1) != 1)
	if (write(1, &c, 1) == -1)
		{
			tp->error = 1;
			if(tp->len == 0)
				tp->len = -1;
		}
	else
			tp->len += 1;
			// printf("\e[3;31mlen %d \e[0m\n", tp->len);
			// printf("\e[1;34mwidht %d \e[0m\n", tp->widht);
	}
}

