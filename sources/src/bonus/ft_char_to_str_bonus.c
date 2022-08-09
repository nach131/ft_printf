/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_str_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:17:45 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/08 17:17:47 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

char *ft_char_to_str(const char *s, int n)
{
    if (!s)
        return NULL;
    int i;
    char *res = NULL;
    res = (char *)malloc(n + 1);
    if (!res)
    {
       // marcar algun error
			return NULL;
    }
    else
    {
        i = 0;
        while (i < n)
        {
            res[i] = s[i];
            i++;
        }
        res[i] = '\0';
        return res;
    }
}