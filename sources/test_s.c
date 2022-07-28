/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:09:37 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/28 12:09:44 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft/inc/libft.h"
#include "inc/ft_printf.h"

int	main(void)
{

	char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";

	printf("-------	1t ------\n");
	int str_1_1 = ft_printf("%s", "");
	printf("str_1_1 = %d\n", str_1_1);
	int str_1_2 = printf("%s", "");
	printf("str_1_2 = %d\n", str_1_2);

	printf("-------	2t ------\n");
	int str_2_1 = ft_printf(" %s", "");
	printf("str_2_1 = %d\n", str_2_1);
	int str_2_2 = printf(" %s", "");
	printf("str_2_2 = %d\n", str_2_2);

	printf("-------	3t ------\n");
	int str_3_1 = ft_printf("%s ", "");
	printf("str_3_1 = %d\n", str_3_1);
	int str_3_2 = printf("%s ", "");
	printf("str_3_2 = %d\n", str_3_2);

	printf("-------	4t ------\n");
	int str_4_1 = ft_printf(" %s", "");
	printf("str_4_1 = %d\n", str_4_1);
	int str_4_2 = printf(" %s", "");
	printf("str_4_2 = %d\n", str_4_2);

	printf("-------	5t ------\n");
	int str_5_1 = ft_printf(" %s ", "-");
	printf("str_5_1 = %d\n", str_5_1);
	int str_5_2 = printf(" %s ", "-");
	printf("str_5_2 = %d\n", str_5_2);

	printf("-------	6t ------\n");
	int str_6_1 = ft_printf(" %s %s ", "", "-");
	printf("str_6_1 = %d\n", str_6_1);
	int str_6_2 = printf(" %s %s ", "", "-");
	printf("str_6_2 = %d\n", str_6_2);

	printf("-------	7t ------\n");
	int str_7_1 = ft_printf(" %s %s ", " - ", "");
	printf("str_7_1 = %d\n", str_7_1);
	int str_7_2 = printf(" %s %s ", " - ", "");
	printf("str_7_2 = %d\n", str_7_2);

	printf("-------	8t ------\n");
	int str_8_1 = ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
	printf("str_8_1 = %d\n", str_8_1);
	int str_8_2 = printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
	printf("str_8_2 = %d\n", str_8_2);

	printf("-------	9t ------\n");
	int str_9_1 = ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	printf("str_9_1 = %d\n", str_9_1);
	int str_9_2 = printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	printf("str_9_2 = %d\n", str_9_2);

	// printf("-------	10t ------\n");
	// int str_10_1 = ft_printf(" NULL %s NULL ", NULL);
	// printf("str_10_1 = %d\n", str_10_1);
	// int str_10_2 = printf(" NULL %s NULL ", NULL);
	// printf("str_10_2 = %d\n", str_10_2);


	printf("-------	10t ------\n");
	int str_10_1 = ft_printf("esto es widht\n");
	printf("str_10_1 = %d\n", str_10_1);
	int str_10_2 = printf("esto es widht\n");
	printf("str_10_2 = %d\n", str_10_2);
}