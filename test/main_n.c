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
	// printf("-------NULL------\n");
	// int null = ft_printf("42 Barcelona %s\n", NULL);
	// int null2 = printf("42 Barcelona %s\n", NULL);
	// printf("\nstr = %d\nstr2 = %d\n", null, null2);

	// printf("-------	String------\n");
	// int str1 = ft_printf("42 Barcelona %s\n", "hola");
	// int str2 = printf("42 Barcelona %s\n", "hola");
	// printf("\nstr1 = %d\nstr2 = %d\n", str1, str2);

	// printf("-------	Char------\n");
	// int char1 = ft_printf("%c\n", '@');
	// int char2 = printf("%c\n", 'Z');
	// printf("\nchar1 = %d\nchar2 = %d\n", char1, char2);

	// printf("-------	%% ------\n");
	// int centa1 = ft_printf("%%\n");
	// int centa2 = printf("%%\n");
	// printf("\ncenta1 = %d\ncenta2 = %d\n", centa1, centa2);

	// printf("-------	Char------\n");
	// int char1 = ft_printf("%c\n", NULL);
	// int char2 = printf("%c\n", NULL);
	// printf("\nchar1 = %d\nchar2 = %d\n", char1, char2);

	// printf("------Decimal Unsigned-------\n");
	// int uns1 = ft_printf("%u\n", (unsigned int) 4294967295);
	// int uns2 = printf("%u\n", (unsigned int) 4294967295);
	// printf("\nuns1 = %d\nuns2 = %d\n", uns1, uns2);

	// printf("------Decimal Unsigned Plus-------\n");
	// int uns_1 = ft_printf("%u\n", LONG_MAX);
	// int uns_2 = printf("%u\n", LONG_MAX);
	// printf("\nuns_1 = %d\nuns_2 = %d\n", uns_1, uns_2);

	printf("------HEX-------\n");
	int hex1 = ft_printf("%x\n", "42 Barcelona");
	int hex2 = printf("%x\n", "42 Barcelona");
	printf("\nhex1 = %d\nhex2 = %d\n", hex1, hex2);

	printf("------HEX- X-----\n");
	int hex3 = ft_printf("%X\n", 42);
	int hex4 = printf("%X\n", 42);
	printf("\nhex3 = %d\nhex4 = %d\n", hex3, hex4);

	// printf("------Puntero-------\n");
	// int ptr1 = ft_printf("%p\n", (void *) "");
	// int ptr2 = printf("%p\n", (void *) "");
	// printf("\nptr1 = %d\nptr2 = %d\n", ptr1, ptr2);

	// printf("------Puntero-------\n");
	// int ptr_1 = ft_printf(" %p\n", 16);
	// int ptr_2 = printf(" %p\n", 16);
	// printf("\nptr_1 = %d\nptr_2 = %d\n", ptr_1, ptr_2);

  // printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);


	// printf("------Integer-------\n");
	// int int1 = ft_printf("%i\n", INT_MIN);
	// int int2 = printf("%i\n", INT_MIN);
	// printf("\nint1 = %d\nint2 = %d\n", int1, int2);
	// printf(" %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	// printf("------Decimal-------\n");
	// int num = ft_printf("42 Barcelona %d\n", -42);
	// int num2 = printf("42 Barcelona %d\n", -42);
	// printf("\nstr = %d\nstr2 = %d\n", num, num2);

	// printf("-----Dos Decimal--------\n");
	// int nums = ft_printf("42 Barcelona %d mas de uno %d\n", 42, -52);
	// int nums2 = printf("42 Barcelona %d mas de uno %d\n", 42, -52);
	// printf("\nstr = %d\nstr2 = %d\n", nums, nums2);

	printf("-------------\n");
}


// {
//     ft_printf("26----------------------\n");
//     printf("%d\n",    printf("   printf |%-8.6d|%-8.6d|\n", 1025, -1025));
//     printf("%d\n", ft_printf("ft_printf |%-8.6d|%-8.6d|\n", 1025, -1025));
//     ft_printf("26----------------------\n");
//     printf("%d\n",    printf("   printf |%-15.8d|\n", 15));
//     printf("%d\n", ft_printf("ft_printf |%-15.8d|\n", 15));
//     ft_printf("26----------------------\n");
//     printf("%d\n",    printf("|%-20.8d|\n", 15));
//     printf("%d\n", ft_printf("|%-20.8d|\n", 15));
//     ft_printf ("111-----------------------------------\n");
//     printf("%d\n",    printf("   printf |%0*d|%0*d|\n",  -3, 10012, -3, -10012));
//     printf("%d\n", ft_printf("ft_printf |%0*d|%0*d|\n",  -3, 10012, -3, -10012));
//     ft_printf ("119-----------------------------------\n");
//     printf("%d\n",    printf("   printf |%-*d|%-*d|\n",  5, 10012, 5, -10012));
//     printf("%d\n", ft_printf("ft_printf |%-*d|%-*d|\n",  5, 10012, 5, -10012));
//     return (0);
// }