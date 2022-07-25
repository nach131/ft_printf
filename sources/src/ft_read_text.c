/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_text.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:41:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/16 12:43:04 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "libft.h"
#include "ft_printf.h"

const	char	*ft_read_text(t_print *tp, const char *format)
{
	char	*next;

	next = ft_strchr(format, '%');
	if (next)
		tp->widht = next - format;
	else
		tp->widht = ft_strlen(format);
	// write(1, format, tp->widht); // Adapatar protype ft_write
		if (write(1, format, tp->widht) == -1)
			{
			tp->len = -1;
			return (format);
			}
	tp->len += tp->widht;
	while (*format && *format != '%')
		++format;
		// format++;
	return (format);
}
