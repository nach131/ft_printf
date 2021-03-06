/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:37:55 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/20 17:53:39 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>

typedef struct s_print
{
	int	len;
	int	widht;
}	t_print;

const char	*ft_search_arg(va_list arg, const char *format, t_print *sc);
const char	*ft_read_text(t_print *sc, const char *format);
int			ft_print_unsint(va_list arg, t_print *tp);
int			ft_print_hex(va_list arg, t_print *tp, char *hexa);
int			ft_print_char(va_list arg, t_print *tp);
int			ft_print_dec(va_list arg, t_print *tp);
int			ft_print_str(va_list arg, t_print *tp);
int			ft_print_ptr(va_list arg, t_print *tp);
int			ft_printf(const char *format, ...);

#endif
