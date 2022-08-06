/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:08:39 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/06 19:09:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"

void	ft_rep_write(char ch, t_print *tp)
{
	while (tp->num_zero)
		{
			ft_write(ch, tp);
			tp->num_zero -= 1;
		}
}


// void	ft_rep_write(char ch, size_t n, t_print *tp)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < n)
// 	{	
// 		ft_write(ch, tp);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	super_write('0', 120);
// }