/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** display.c
*/

#include "my.h"

void	drawsquare(square_t square, char *map)
{
	int c = square.bot_right  + 1;
	for (int i = 0; i < square.size; i++) {
		for (int j = 0; j < square.size; j++) {
			c -= 1;
			map[c] = 'x';
		}
		c += square.size;
		c -= square.nb_cols;
	}
}

void	put_array(int *int_map, char *map, square_t square)
{
	for (int i = 0; i < my_strlen(map); i++) {
		if (i%square.nb_cols == 0 && i != 0)
			my_putstr("\n");
		my_putchar(map[i]);
	}
}