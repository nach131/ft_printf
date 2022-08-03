/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../sources/inc/ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main()
{
	// printf("-------	d T23------\n");
	// int bonus_1_1 = ft_printf("%09d\n", -42);
	// int bonus_1_2 = printf("%09d\n", -42);
	// printf("\nbonus_1_1 = %d\nbonus_1_2 = %d\n", bonus_1_1, bonus_1_2);
	// printf("-------------\n");

	// printf("-------------\n");

	printf("%09d\n", -42);
	printf("%-09d\n", 42);
	printf("%09d\n", 42);

}

// -0004825
// 0003267
// 000003267