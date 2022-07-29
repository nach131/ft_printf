/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_por.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:20:29 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/29 13:20:34 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../inc/ft_printf.h"
#include <limits.h>
#include <stdio.h>

// void	tester(int mio, int ori)
// {

// mio == ori ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", mio, ori)
// 						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", mio, ori);
// }

int main()
{
	printf("\033[0;34m-------	string T1------\033[0;37m\n");
	int str_1_1 = ft_printf("%s", "\n");
	int str_1_2 = printf("%s", "\n");
	str_1_1 == str_1_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", str_1_1, str_1_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", str_1_1, str_1_2);

	printf("\033[0;34m-------	string T2------\033[0;37m\n");
	int str_2_1 = ft_printf(" %s", "\n");
	int str_2_2 = printf(" %s", "\n");
	str_2_1 == str_2_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", str_2_1, str_2_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", str_2_1, str_2_2);

	printf("\033[0;34m-------	string T3------\033[0;37m\n");
	int str_3_1 = ft_printf("%s ", "\n");
	int str_3_2 = printf("%s ", "\n");
	str_3_1 == str_3_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", str_3_1, str_3_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", str_3_1, str_3_2);

	printf("\033[0;34m-------	string T4------\033[0;37m\n");
	int str_4_1 = ft_printf(" %s ", "\n");
	int str_4_2 = printf(" %s ", "\n");
	str_4_1 == str_4_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", str_4_1, str_4_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", str_4_1, str_4_2);

	printf("\033[0;34m-------	string T5------\033[0;37m\n");
	int str_5_1 = ft_printf(" %%   %%   %% \n");
	int str_5_2 = printf(" %%   %%   %% \n");	
	str_5_1 == str_5_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", str_5_1, str_5_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", str_5_1, str_5_2);
	
	printf("\033[0;34m-------	string T6------\033[0;37m\n");
	int str_6_1 = ft_printf(" %s %s ", "", "-\n");
	int str_6_2 = printf(" %s %s ", "", "-\n");	
	str_6_1 == str_6_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", str_6_1, str_6_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", str_6_1, str_6_2);

	printf("\033[0;34m-------	string T7------\033[0;37m\n");
	int str_7_1 = ft_printf(" %s %s ", " - ", "\n");
	int str_7_2 = printf(" %s %s ", " - ", "\n");	
	str_7_1 == str_7_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", str_7_1, str_7_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", str_7_1, str_7_2);

	printf("\033[0;34m===============S===================\033[0;37m\n");

	printf("\033[0;34m-------	string T1------\033[0;37m\n");
	int str_s1_1 = ft_printf("%s\n", "");
	int str_s1_2 = printf("%s\n", "");	
	str_s1_1 == str_s1_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", str_s1_1, str_s1_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", str_s1_1, str_s1_2);
}
