/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:10:04 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/08 13:10:05 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include "ft_printf.h"
#include "libft.h"

void	*ft_memcpy_bonus(void *dest, const void *src)
{
	char	*de;
	char	*sr;
	size_t	i;
	int			len_dest;

	de = (char *)dest;
	sr = (char *)src;
	len_dest = ft_strlen(de);
	i = 0;
	if (sr || de)
	{
		while (!i)
		{
			if (len_dest == 0)
				de[i] = sr[i];
			else
				de[len_dest] = sr[i];
			i++;
		}
		return (de);
	}
	return (NULL);
}