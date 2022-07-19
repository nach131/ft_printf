/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:37:55 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/07/16 11:39:46 by nmota-bu         ###   ########.fr       */
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

int			ft_printf(const char *format, ...);
const char	*ft_search_arg(va_list arg, const char *format, t_print *sc);
int			ft_intlen(int nb, char c);
const	char	*ft_read_text(t_print *sc, const char *format);
void		ft_print_hexa(unsigned int x);
int	ft_print_str(va_list arg, t_print *tp);
// int *ft_print_char(va_list arg, t_print *tp);

#endif
