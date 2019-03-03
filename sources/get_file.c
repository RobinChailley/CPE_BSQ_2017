/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main.c
*/

#include "my.h"

#define SIZE_BLOCK 4096

char	*get_file(char *path)
{
	struct stat sb;
	int fd;

	stat(path, &sb);
	fd = open(path, O_RDONLY);
	char *map = malloc(sizeof(char) * (long long int)sb.st_size);
	read(fd, map, (long long int)sb.st_size);
	return (map);
}
