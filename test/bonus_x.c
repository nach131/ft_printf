/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:21:59 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/07 00:17:27 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>

int	main(void)
{
	printf("%%7d: 42%7x|\n", 42);
	printf("%%7d: -42%7x|\n", -42);
	printf("-------------------\n");
	printf("%%-7d: 42%-7x|\n", 42);
	printf("%%-7d: -42%-7x|\n", -42);
	printf("-------------------\n");
	printf("%%.7d: 42%.7x|\n", 42);
	printf("%%.7d: -42%.7x|\n", -42);
	printf("-------------------\n");
	printf("%%07d: 42%07x|\n", 42); 
	printf("%%07d: -42%07x|\n", -42);
	printf("-------------------\n");
	printf("%%7.5d: 42%7.5x|\n", 42);
	printf("%%7.5d: -42%7.5x|\n", -42);
	printf("-------------------\n");
	printf("%%-7.5d: 42%-7.5x|\n", 42);
	printf("%%-7.5d: -42%-7.5x|\n", -42);
	printf("-------------------\n");

}

// %7d: 42     2a|
// %7d: -42ffffffd6|
// -------------------
// %-7d: 422a     |
// %-7d: -42ffffffd6|
// -------------------
// %.7d: 42000002a|
// %.7d: -42ffffffd6|
// -------------------
// %07d: 42000002a|
// %07d: -42ffffffd6|
// -------------------
// %7.5d: 42  0002a|
// %7.5d: -42ffffffd6|
// -------------------
// %-7.5d: 420002a  |
// %-7.5d: -42ffffffd6|
// -------------------
