/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** get_info.c
*/

#include "my.h"

int	get_cols(char *str)
{
	int i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int	get_lines(char *map)
{
	int nb_lines = 0;
	char *first_line = malloc(sizeof(char) * 1000);
	int i = 0;
	while (map[i] != '\n') {
		first_line[i] = map[i];
		i++;
	}
	nb_lines = my_getnbr(first_line);
	free(first_line);
	return (nb_lines);
}

void	get_cols_and_line(square_t *square, char *map)
{
	square->nb_cols = get_cols(map);
	square->nb_lines = get_lines(map);
}

void	find_biggest_value(int *int_map, char *map, square_t *square)
{
	square->size = 0;
	for (int i = 0; i < my_strlen(map); i++) {
		if (int_map[i] > square->size) {
			square->size = int_map[i];
			square->bot_right = i;
		}
	}
}