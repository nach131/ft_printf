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

#include "libft.h"
#include "ft_printf.h"

void	ft_write_strs(const char *c, t_print *tp)
{
if (!tp->error)
{	
	if (write(1, c, tp->widht) != 1)
	// if (write(c_len, &c, c_len) != sizeof(char))
		{
			tp->error = 1;
			tp->len = -1;
		}
	else
		tp->len += 1;
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
	// write(1, format, tp->widht); // Adapatar protype ft_write
	// ft_write_strs(format, tp);
	if (!tp->error)
	{	
		if (write(1, format, tp->widht) != 1)
		{
			tp->error = 1;
			tp->len = -1;
		}
		else
			tp->len += 1;
	}
if (tp->widht > 1)
	tp->len = tp->widht;

	// tp->len += tp->widht;
	while (*format && *format != '%')
		++format;
	// format++;
	return (format);
}
