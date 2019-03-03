/*
** EPITECH PROJECT, 2017
** BSQ
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>

typedef struct square_s
{
	int nb_lines;
	int nb_cols;
	int size;
	int bot_right;

}	square_t;

char	*get_file(char *path);
void	my_putchar(char c);
void	my_putstr(char *str);
char	*my_strcat(char *s1, char *s2);
int	my_strlen(char *str);
int	my_getnbr(char const *str);
char	*delete_first_line(char *map);
char	*delete_all_n(char *map);
void	fill_top_left(char *map, int *int_map, square_t square);
int	find_minimum(int* int_map, int i, int nb_cols);
void	fill_whole_array(int *int_map, char *map, square_t *square);
int	get_cols(char *str);
int	get_lines(char *map);
void	get_cols_and_line(square_t *square, char *map);
void	find_biggest_value(int *int_map, char *map, square_t *square);
void	drawsquare(square_t square, char *map);
void	put_array(int *int_map, char *map, square_t square);

#endif /* MY_H_ */