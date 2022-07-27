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


// static void	ft_putstr_read(const char *s, t_print *tp)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		ft_write(s[i], tp, 1);
// 		i++;
// 	}
// }

static void	ft_write_read(const char *c, t_print *tp)
{
if (!tp->error)
{	
	// if (write(1, &c, 1) != 1)
	if (write(1, c, tp->widht) == -1)
		{
			tp->error = 1;
			if(tp->len == 0)
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
// ft_putstr(format, tp);
ft_write_read(format, tp);

//==mismo ====ft_write_read==========================================================================
	// if (!tp->error)
	// {	
	// 	if (write(1, format, tp->widht) == -1)
	// 	{
	// 		tp->error = 1;
	// 		tp->len = -1;
	// 	}
	// 	else
	// 		tp->len += 1;
	// }
// printf("read len %d\n", tp->len);
// printf("read widht%d\n", tp->widht);
//===========================================================================================

	// if (tp->widht > 1)
	// 	tp->len += tp->widht;
	while (*format && *format != '%')
		++format;
	// format++;
	return (format);
}
