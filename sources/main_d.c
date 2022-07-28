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
	// printf(" %li %li %lu\n", LONG_MAX, LONG_MIN, ULONG_MAX);
	printf("-------	no format ------\n");
	int centa1 = ft_printf("\x01\x02\x07\v\x08\f\r");
	printf("centa1 = %d\n", centa1);
	int centa2 = printf("\x01\x02\x07\v\x08\f\r");
	printf("centa2 = %d\n", centa2);


	printf("-------	s test 10-----\n");
	int str1 = ft_printf(" NULL %s NULL ", NULL);
	printf("str1 = %d\n", str1);
	int str2 = printf(" NULL %s NULL ", NULL);
	printf("str2 = %d\n", str2);

	printf("------d 23-------\n");
	int dec_1 = ft_printf(" %d \n", INT_MIN);
	int dec_2 = printf(" %d \n", INT_MIN);
	printf("\ndec_1 = %d\ndec_2 = %d\n", dec_1, dec_2);

	// printf("------d 29-------\n");
	// int dec29_1 = ft_printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// int dec29_2 = printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("\ndec29_1 = %d\ndec29_2 = %d\n", dec29_1, dec29_2);

	// printf("------ptr ULONG_MAX-------\n");
	// int ptr1 = ft_printf("0x%p-\n", (void *)ULONG_MAX);
	// int ptr2 = printf("0x%p-\n", (void *)ULONG_MAX);
	// // int ptr1 = ft_printf("%p-\n", (void *)ULONG_MAX);
	// // int ptr2 = printf("%p-\n", (void *)ULONG_MAX);
	// printf("\nptr1 = %d\nptr2 = %d\n", ptr1, ptr2);

	printf("------%% 4-------\n");
	int por4_1 = ft_printf(" %%  %%  %% ");
	int por4_2 = printf(" %%  %%  %% ");
	printf("\npor4_1 = %d\npor4_2 = %d\n", por4_1, por4_2);

	printf("------%% 5-------\n");
	int por5_1 = ft_printf(" %%   %%   %% ");
	int por5_2 = printf(" %%   %%   %% ");
	printf("\npor5_1 = %d\npor5_2 = %d\n", por5_1, por5_2);


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

	printf("------Un test 11-------\n");
	int un1 = ft_printf("dgs%uxx\n", 10);
	int un2 = printf("dgs%uxx\n", 10);
	printf("\nun1 = %d\nun2 = %d\n", un1, un2);


}


