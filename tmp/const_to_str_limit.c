/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_to_str_limit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:21:59 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/08 18:07:10 by nmota-bu         ###   ########.fr       */
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

char *constchar_to_str(const char *s, int n)
{
    if (!s)
        return NULL;
    int i;
    char *res = NULL;
    res = (char *)malloc(n + 1);
    if (!res)
    {
        fprintf(stderr, "Memory Allocation Failed! Exiting...\n");
        exit(EXIT_FAILURE);
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

int main(void)
{
    t_print tp;
    char *res;
    const char *esto = "42 Barcelona";
    
    tp.to_arg = "arg";
    tp.to_write = "write";
    res = constchar_to_str(esto, 2);

//     // tp.total = ft_strjoin(tp.to_arg, res);
//     tp.total = ft_strjoin(tp.to_arg, constchar_to_str(esto));
//     tp.total = ft_strjoin(tp.total, tp.to_write);

    // printf("%s", tp.total);
    printf("%s", res);
}
