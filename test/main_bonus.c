/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "../sources/inc/ft_printf.h"
#include <limits.h>

int	main()
{
	printf("-------	d T23------\n");
	// int dec_23_1 = ft_printf("\x01\x02\x07\v\x08\f\r");
	int dec_23_1 = ft_printf("aki%d\n", INT_MIN);
	int dec_23_2 = printf("aki%d\n", INT_MIN);
	printf("\ndec_23_1 = %d\ndec_23_2 = %d\n", dec_23_1, dec_23_2);
	printf("-------------\n");
}

// -000042

