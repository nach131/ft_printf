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
#include "unistd.h"

void	ft_write(char c, t_print *tp)
{
//// AKI ES EL KIT

	if (write(1, &c, sizeof(char)) != sizeof(char))
		tp->len = -1;
	else
		tp->len += 1;
//===========================================================================================
// int	toma;

// toma = write(1, &c, 1);

// 	if (toma == -1)
// 		tp->len = -1;
// 	else
// 		tp->len += 1;
		
//===============================
// if (toma == 1)
// 	{
// 		if (write(1, &c, 1) == 1)
// 		{
// 			tp->len += 1;
// 		}
// 	}
// else
// {	
// 	// toma = -1;
// 	tp->len = -1;
// 	}
//===========================================================================================
// while (toma == 0)
// 	{
// 		toma = write(1, &c, 1);
// 	}
// if (toma == 1)
// 	write(1, &c, 1);
// 	tp->len += 1;
// if (toma == -1)
// 	tp->len = -1;
}

