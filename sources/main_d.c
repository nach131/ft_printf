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


	// printf("-------	%% error-----\n");
	// int str1 = ft_printf(" %%\n");
	// printf("str1 = %d\n", str1);
	// int str2 = printf(" %%\n");
	// printf("str2 = %d\n", str2);

	// printf(" %li %li %lu\n", LONG_MAX, LONG_MIN, ULONG_MAX);


	printf("------ptr ULONG_MAX-------\n");
	int ptr1 = ft_printf("0x%p-\n", (void *)ULONG_MAX);
	int ptr2 = printf("0x%p-\n", (void *)ULONG_MAX);
	// int ptr1 = ft_printf("%p-\n", (void *)ULONG_MAX);
	// int ptr2 = printf("%p-\n", (void *)ULONG_MAX);
	printf("\nptr1 = %d\nptr2 = %d\n", ptr1, ptr2);


	// printf("------ptr ULONG_MAX-------\n");
	// int ptr_long1 = ft_printf("0x%p\n", 0);
	// int ptr_long2 = printf("0x%p\n", 0);
	// printf("\nptr_long1 = %d\nptr_long2 = %d\n", ptr_long1, ptr_long2);

	// printf("------ptr NULL-------\n");
	// int ptr_1 = ft_printf("%p\n", "");
	// int ptr_2 = printf("%p\n", "");
	// printf("\nptr_1 = %d\nptr_2 = %d\n", ptr_1, ptr_2);

	// printf("------ptr 0-------\n");
	// int dec1 = ft_printf("%d", 0);
	// int dec2 = printf("%d", 0);
	// printf("\ndec1 = %d\ndec2 = %d\n", dec1, dec2);


}


