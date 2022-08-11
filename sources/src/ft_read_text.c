/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_text.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:41:13 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/06 23:28:42 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

// static void	no_coincide(t_print *tp, va_list arg)
// {
// 	while(tp->flag_percent)
// 	{
// 		ft_search_arg(arg, tp);
// 		// ++tp->format;
// 	}
// }

void	ft_read_text(t_print *tp, va_list arg)
{

	char *next;
	int	widht;

	next = ft_strchr(tp->format, '%');

	if (next)
		widht = next - tp->format;
	if (!tp->flag_percent)
		{
			if(!next)
				widht = ft_strlen(tp->format);
			tp->to_write = ft_strjoin(tp->to_write, ft_char_to_str(tp->format, widht));
		}
	else
	 ft_search_arg(arg, tp);
	// no_coincide(tp, arg);

	
	// else if (*tp->format == '%')
	// 	{
	// 		tp->format++;
	// 		ft_search_arg(arg, tp);
	// 	}
	while (*tp->format && *tp->format != '%')
	{
		tp->format++;
	}

}
