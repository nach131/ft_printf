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
	printf("\033[0;34m-------	%% T1------\033[0;37m\n");
	int char_1_1 = ft_printf(" %% \n");
	int char_1_2 = printf(" %% \n");
	char_1_1 == char_1_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", char_1_1, char_1_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", char_1_1, char_1_2);

	printf("\033[0;34m-------	%% T2------\033[0;37m\n");
	int char_2_1 = ft_printf("%% %%\n");
	int char_2_2 = printf("%% %%\n");
	char_2_1 == char_2_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", char_2_1, char_2_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", char_2_1, char_2_2);

	printf("\033[0;34m-------	%% T3------\033[0;37m\n");
	int char_3_1 = ft_printf(" %% %% %% \n");
	int char_3_2 = printf(" %% %% %% \n");
	char_3_1 == char_3_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", char_3_1, char_3_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", char_3_1, char_3_2);

	printf("\033[0;34m-------	%% T4------\033[0;37m\n");
	int char_4_1 = ft_printf(" %%  %%  %% \n");
	int char_4_2 = printf(" %%  %%  %% \n");
	char_4_1 == char_4_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", char_4_1, char_4_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", char_4_1, char_4_2);

	printf("\033[0;34m-------	%% T5------\033[0;37m\n");
	int char_5_1 = ft_printf(" %%   %%   %% \n");
	int char_5_2 = printf(" %%   %%   %% \n");	
	char_5_1 == char_5_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", char_5_1, char_5_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", char_5_1, char_5_2);
	
	printf("\033[0;34m-------	%% T6------\033[0;37m\n");
	int char_6_1 = ft_printf("%%\n");
	int char_6_2 = printf("%%\n");	
	char_6_1 == char_6_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", char_6_1, char_6_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", char_6_1, char_5_2);

	printf("\033[0;34m-------	%% T7------\033[0;37m\n");
	int char_7_1 = ft_printf("%% %%\n");
	int char_7_2 = printf("%% %%\n");	
	char_7_1 == char_7_2 ? printf("\e[5;32mft_printf: %d\nprintf: %d\n\e[0m\n", char_7_1, char_7_2)
						: printf("\e[3;31mft_printf: %d\n\e[5;32mprintf: %d\n\e[0m\n", char_7_1, char_5_2);
}
