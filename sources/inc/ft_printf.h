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
	// int		widht;
	int		flag_error;
	int		flag_zero;
	int		flag_percent;
	int		num_zero;
	char	*to_write;
	char	*to_arg;
	char	*to_prev;
	const char *format;
}	t_print;

int		ft_printf(const char *format, ...);
void ft_search_arg(va_list arg, t_print *tp);
void	ft_read_text(t_print *tp);
// void	ft_read_text(t_print *tp, va_list arg);
void	ft_write(int len, t_print *tp);
char *ft_char_to_str(const char *s, int n);
void ft_iszero_bonus(t_print *tp, va_list arg);
void ft_print_dec(va_list arg, t_print *tp);
char *ft_char_to_str(const char *s, int n);
void	ft_search_bonus(t_print *tp, va_list arg);
void ft_print_dec_bonus(t_print *tp);


#endif
