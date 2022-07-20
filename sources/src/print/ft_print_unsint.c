/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:06:57 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/20 20:26:50 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"
#include "ft_printf.h"

// static int	ft_numlen(unsigned int nb)
// {
// 	int	len;

// 	len = 0;
// 	while (nb != 0)
// 	{
// 		len++;
// 		nb /= 10;
// 	}
// 	return (len);
// }

// static char *ft_unsing_itoa(unsigned long nb)
// {
// 	int	len;
// 	char	*num;
// 	len = ft_numlen(nb);
// 	num = (char *)ft_calloc((len +1), sizeof(char));
// 	if (!num)
// 		return (NULL);
// 	num[len] = '\0';
// 	while (nb != 0)
// 	{
// 		num[len -1] = nb % 10 + '0';
// 		nb /= 10;
// 		len--;
// 	}
// 	return (num);
// }

// int	ft_print_unsint(va_list arg, t_print *tp)
// {
// 	char *num;
// 	unsigned long	u;
// 	u = va_arg(arg, unsigned long);
// 	num = ft_unsing_itoa(u);

// // printf("dos %s\n", num);
// 	ft_putstr_fd(num, 1);
// 	tp->len += ft_strlen(num);
// 	free(num);
// 	return (1);
// }
//===========================================================================================

static void	u_itoa_hex(unsigned long long nbr, t_print *tp)
{
	int	i;

	i = 0;
	if (nbr > 9)
	{
		u_itoa_hex(nbr / 10, tp);
		ft_putchar_fd(nbr % 10 + '0', 1);
		i++;
		tp->len += i;
	}
	else
		ft_putchar_fd(nbr + '0', 1);
}


int	ft_print_unsint(va_list arg, t_print *tp)
{
	unsigned long long	nbr;
	
	nbr = va_arg(arg, unsigned long long);;
	// printf("itoa: %d\n",u_itoa_hex(nbr));
	u_itoa_hex(nbr, tp);

	tp->len += 1;
	return (1);
}



	// printf("aki: %lu\n",(unsigned long) u);
	// unsigned int	x = 4294967295;
  // printf("UINT_MAX    :   %u\n", (unsigned int) x);


