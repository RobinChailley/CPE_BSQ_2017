/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** main.c
*/

#include "my.h"

int 	main(int ac, char **av)
{
	char *map = get_file(av[1]);
	int *int_map = malloc(sizeof(int) * my_strlen(map));
	square_t square;
	square.nb_lines = get_lines(map);
	map = delete_first_line(map);
	square.nb_cols = get_cols(map);
	map = delete_all_n(map);
	fill_top_left(map, int_map, square);
	fill_whole_array(int_map, map, &square);
	find_biggest_value(int_map, map, &square);
	drawsquare(square, map);
	put_array(int_map, map, square);
	my_putchar('\n');
	free(map);
	free(int_map);
	return (0);
}