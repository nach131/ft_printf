/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_to_const.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:21:59 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/08 21:27:50 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "../sources/libft/inc/libft.h"
typedef struct s_print
{
    char *to_write;
    char *to_arg;
    char *total;
    const char *toma;
} t_print;

static int ft_len_esto(const char *s)
{
    int i;

    i = 0;
    if (!s)
        return (0);
    while (*s != 'd') // AKI TODAS LAS VARIABLES
    {
        s++;
        i++;
    }
    return (i);
}

int main(void)
{
    t_print tp;
    char *res = NULL;
    int i;
    int len;
    const char *esto = "122daki\n";

    tp.toma = esto;

    // tp.total = ft_strjoin(tp.to_arg, constchar_to_str(esto));
    // tp.total = ft_strjoin(tp.total, tp.to_write);
    len = ft_len_esto(esto);

    // AHORA constchar_to_str

    // while (*esto)
    // {

    //     write(1, esto,1);
    //     esto++;
    // }
    while (*tp.toma)
    {
        write(1, tp.toma, 1);
        tp.toma++;
    }
}
