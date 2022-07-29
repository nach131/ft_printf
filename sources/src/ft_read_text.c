/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_text.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:41:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/26 14:05:11 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

static void	ft_write_str(const char *c, t_print *tp)
{
if (!tp->error)
{	
	// if (write(1, &c, 1) != 1)
	if (write(1, c, tp->widht) == -1)
		{
			tp->error = 1;
			// if(tp->len == 0) //esto no tenia mucho sentido
				tp->len = -1;
		}
	else
				tp->len += 1;
	}
	if(tp->widht > 1)
	{	
		tp->len = tp->widht;
		}
}

const	char	*ft_read_text(t_print *tp, const char *format)
{
	char	*next;
	next = ft_strchr(format, '%');

	if (next)
		tp->widht = next - format;
	else
			tp->widht = ft_strlen(format);
	ft_write_str(format, tp);

// 	if (tp->widht > 1)
// {		
// 		// printf("\e[3;31m %d \e[0m\n", tp->widht);
// 		// tp->len += tp->widht;
// 		// cambiado para que no sume
// 		tp->len = tp->widht;
// 		}

	while (*format && *format != '%')
		++format;
	
		// printf("\e[3;31mlen %d \e[0m\n", tp->len);
		// printf("\e[1;34mwidht %d \e[0m\n", tp->widht);
		// printf("\e[3;33m len str:%d \e[0m\n", tp->len_str);
	return (format);
}
