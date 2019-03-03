/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** algo.c
*/

#include "my.h"

int 	find_minimum(int* int_map, int i, int nb_cols)
{
	int min = 10000000;
	if (int_map[i-1] < min)
		min = int_map[i-1];
	if (int_map[i-nb_cols] < min)
		min = int_map[i-nb_cols];
	if (int_map[i-1-nb_cols] < min)
		min = int_map[i-1-nb_cols];
	return (min);
}

void	fill_whole_array(int *int_map, char *map, square_t *square)
{
	square->size = 10000000;
	for (int i = square->nb_cols+1; i < my_strlen(map); i++) {
		if (i % square->nb_cols == 0)
			i++;
		if (map[i] == 'o')
			int_map[i] = 0;
		else {
			int_map[i] = find_minimum(int_map, i, square->nb_cols) + 1;
		}
	}
}