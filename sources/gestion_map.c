/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** gestion_map.c
*/

#include "my.h"

char 	*delete_first_line(char *map)
{
	char *new_map = malloc(sizeof(char) * my_strlen(map));
	int i = 0;
	int j = 0;

	while (map[i] != '\n')
		i++;
	i++;
	while (map[i] != '\0') {
		new_map[j] = map[i];
		i++;
		j++;
	}
	return (new_map);
}

char	*delete_all_n(char *map)
{
	char *new_map = malloc(sizeof(char) * my_strlen(map));
	int i = 0;
	int j = 0;
	while (map[i] != '\0') {
		if (map[i] == '\n')
			i++;
		new_map[j] = map[i];
		i++;
		j++;
	}
	return (new_map);
}

void	fill_top_left(char *map, int *int_map, square_t square)
{
	for (int i = 0; i < square.nb_cols; i++) {
		if (map[i] == 'o')
			int_map[i] = 0;
		else if (map[i] == '.')
			int_map[i] = 1;
	}
	for (int i = 0; i < my_strlen(map); i+= square.nb_cols) {
		if (map[i] == 'o')
			int_map[i] = 0;
		else if (map[i] == '.')
			int_map[i] = 1;
	}
}