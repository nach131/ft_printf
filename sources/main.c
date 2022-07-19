/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// # include "ft_printf.h"
// # include "inc/libft.h"

#include "libft/inc/libft.h"
#include "inc/ft_printf.h"

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

	printf("-------	Char------\n");
	int char1 = ft_printf("%c\n", "I");
	int char2 = printf("%c\n", 'I');;
	printf("\nchar1 = %d\nchar2 = %d\n", char1, char2);

	// printf("------HEX-------\n");
	// int hex = ft_printf("42 Barcelona %x\n", "FLIPE");
	// int hex2 = printf("42 Barcelona %x\n", "FLIPE");
	// printf("\nstr = %d\nstr2 = %d\n", hex, hex2);

	// printf("------Num-------\n");
	// int num = ft_printf("42 Barcelona %d\n", 42);
	// int num2 = printf("42 Barcelona %d\n", 42);
	// printf("\nstr = %d\nstr2 = %d\n", num, num2);

	// printf("-----Dos--------\n");
	// int nums = ft_printf("42 Barcelona %d mas de uno %d\n", 42, -52);
	// int nums2 = printf("42 Barcelona %d mas de uno %d\n", 42, -52);
	// printf("\nstr = %d\nstr2 = %d\n", nums, nums2);

	printf("-------------\n");
}
//int	main(void)
//{
//	int	x;
//
//	x = 42;
//	printf("%05d\n", x);
//	file("42 Barcelona");
////}
