/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_un.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 00:21:59 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/08/07 00:15:58 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

#include <stdio.h>

int	main(void)
{
	printf("%%7d: 42%7u|\n", 42);
	printf("%%7d: -42%7u|\n", -42);
	printf("-------------------\n");
	printf("%%-7d: 42%-7u|\n", 42);
	printf("%%-7d: -42%-7u|\n", -42);
	printf("-------------------\n");
	printf("%%.7d: 42%.7u|\n", 42);
	printf("%%.7d: -42%.7u|\n", -42);
	printf("-------------------\n");
	printf("%%07d: 42%07u|\n", 42); 
	printf("%%07d: -42%07u|\n", -42);
	printf("-------------------\n");
	printf("%%7.5d: 42%7.5u|\n", 42);
	printf("%%7.5d: -42%7.5u|\n", -42);
	printf("-------------------\n");
	printf("%%-7.5d: 42%-7.5u|\n", 42);
	printf("%%-7.5d: -42%-7.5u|\n", -42);
	printf("-------------------\n");

}

// %7d: 42     42|			7 en total se llena con espacios
// %7d: -42    -42|			a la izq
// -------------------
// %-7d: 4242     |			7 en total se llena con espacios 
// %-7d: -42-42    |		a la derecha
// -------------------
// %.7d: 420000042| 		7 total llenado de 0
// %.7d: -42-0000042|		7 total incluido - llenado de cero
// -------------------
// %07d: 420000042| 		7 total llenado de 0
// %07d: -42-000042|		7 total incluido - llenado de cero
// -------------------
// %7.5d: 42  00042|		7 espacios a la izq llenado de ceros
// %7.5d: -42 -00042|		7 - incluido
// -------------------
// %-7.5d: 4200042  |		7 espacios a la derecha llenado de ceros
// %-7.5d: -42-00042 |	7 - incluido
// -------------------
