/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conca_tp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:21:59 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/06 00:42:17 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdarg.h>
#include <stdio.h>

typedef struct s_prueba
{
	int	len;
	char	*str;
} t_prueba;

int	main(void){
	t_prueba		tp;
	const char	*str;
	char					ch = 'z';

	str = &ch;

	tp.len = 0;
	// tp.str = "hola";
	tp.str = &str;

	printf("%d\n", tp.len) ;
	printf("%c\n", ch);
	printf("%s\n", tp.str);
}
 
