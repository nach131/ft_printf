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
#include <limits.h>

int	main()
{
	printf("-------	no format ------\n");
	int centa1 = ft_printf("\x01\x02\x07\v\x08\f\r\n");
	printf("centa1 = %d\n", centa1);
	int centa2 = printf("\x01\x02\x07\v\x08\f\r\n");
	printf("centa2 = %d\n", centa2);


	// printf("-------	s format OK------\n");
	// int str1 = ft_printf("%s", (char *)NULL);
	// printf("str1 = %d\n", str1);
	// int str2 = printf("%s", (char *)NULL);
	// printf("str2 = %d\n", str2);



	printf("------Puntero-------\n");
	int ptr1 = ft_printf("0x%p-", (void *)ULONG_MAX);
	int ptr2 = printf("0x%p-", (void *)ULONG_MAX);
	printf("\nptr1 = %d\nptr2 = %d\n", ptr1, ptr2);

// 	printf("------Puntero-------\n");
// 	int ptr_1 = ft_printf("%p", NULL);
// 	int ptr_2 = printf("%p", NULL);
// 	printf("\nptr_1 = %d\nptr_2 = %d\n", ptr_1, ptr_2);

}


