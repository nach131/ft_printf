/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tp_tojoin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:21:59 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/08 16:52:28 by nmota-bu         ###   ########.fr       */
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
} t_print;

// void ft_memcpy_bonus(t_print *tp, const char c)
// {
// // printf("%s", tp->to_arg);
// printf("%c", c);
// // printf("%c", *ch);
// }

int main(void)
{
    t_print tp;
    const char *esto = "esto";

    tp.to_arg = "arg";
    tp.to_write = "write";

    tp.total = ft_strjoin(tp.to_arg, tp.to_write);



    // while (*esto)
    // {
    //     ft_memcpy_bonus(&tp, *esto);
    //     // printf("esto");
    //     // write(1, esto,1);
    //     esto++;
    // }

    printf("%s,%s,%s", tp.to_arg, tp.to_write, tp.total);
}
