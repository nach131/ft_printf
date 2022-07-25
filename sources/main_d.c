/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:28:19 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/24 11:28:22 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// # include "ft_printf.h"
// # include "inc/libft.h"

#include "libft/inc/libft.h"
#include "inc/ft_printf.h"
#include <stdio.h>

int	main()
{
	printf("-------	%% ------\n");
	int centa1 = ft_printf("%%\n");
	printf("centa1 = %d\n", centa1);
	int centa2 = printf("%%\n");
	printf("centa2 = %d\n", centa2);

	printf("-------	String NULL ------\n");
	int str1 = ft_printf(" NULL %s NULL ", NULL);
	printf("str1 = %d\n", str1);
	int str2 = printf(" NULL %s NULL ", NULL);
	printf("str2 = %d\n", str2);



	
}


