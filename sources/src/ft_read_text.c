/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_text.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:41:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/30 15:49:55 by nmota-bu         ###   ########.fr       */
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
		if (write(1, c, tp->widht) == -1)
		{
			tp->error = 1;
			tp->len = -1;
		}
	}
}

void	*ft_memcpy_read(void *dest, const void *src)
{
	char	*de;
	char	*sr;
	size_t	i;
	int			len_dest;

	de = (char *)dest;
	sr = (char *)src;
	len_dest = ft_strlen(de);
	i = 0;
	if (sr || de)
	{
		while (!i)
		{
			if (len_dest == 0)
				de[i] = sr[i];
			else
				de[len_dest] = sr[i];
			i++;
		}
		return (de);
	}
	return (NULL);
}

const	char	*ft_read_text(t_print *tp, const char *format, va_list arg)
{
	char	*next;

	next = ft_strchr(format, '%');
	if (next)
		tp->widht = next - format;
	else if (tp->zero)
		{
		tp->zero = 0;
			while(*format != 'd' ) // poner las demas...
			{
				ft_memcpy_read(tp->to_write, format);
				format++; 
			}
		tp->num_zero = ft_atoi(tp->to_write);
		tp->to_write = "";
		format = ft_search_arg(arg, format, tp);
		}
	else
		tp->widht = ft_strlen(format);
	ft_write_str(format, tp);
	while (*format && *format != '%')
		format++;
	return (format);
}
