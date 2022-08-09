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
# include <unistd.h>

typedef struct s_print
{
	int		len;
	int		widht;
	int		error;
	int		zero;
	int		num_zero;
	char	*to_write;
	char	*to_arg;
	const char *toma;
}	t_print;

int			ft_printf(const char *format, ...);
const char	*ft_search_arg(va_list arg, const char *format, t_print *tp);
const char	*ft_read_text(t_print *tp, const char *format, va_list arg);
void		ft_print_unsint(va_list arg, t_print *tp);
void		ft_print_hex(va_list arg, t_print *tp, char *hexa);
void		ft_print_char(va_list arg, t_print *tp);
void		ft_print_dec(va_list arg, t_print *tp);
void		ft_print_str(va_list arg, t_print *tp);
void		ft_print_ptr(va_list arg, t_print *tp);
void		ft_write(char c, t_print *tp);
void		ft_putstr(const char *s, t_print *tp);
void		ft_rep_write(char ch, t_print *tp);
void	*ft_memcpy_bonus(void *dest, const void *src);
char *ft_char_to_str(const char *s, int n);
const char	*ft_read_bonus(t_print *tp, const char *format, va_list arg);
// void		ft_read_bonus(t_print *tp, const char *format, va_list arg);

#endif
