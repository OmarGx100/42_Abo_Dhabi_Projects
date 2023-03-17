/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun_emplementations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skabeer <skabeer@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:30:37 by skabeer           #+#    #+#             */
/*   Updated: 2022/08/22 10:35:09 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_str_num.h"
#include "file_process.h"
#include "print_fun.h"
#include "str_funn.h"

int	get_num(char *c, int *ptr)
{
	int					i;
	long unsigned int	len;
	char				*s;
	int					save;
	int					j;

	j = 0;
	i = *ptr;
	len = 0;
	while (c[i] != ':')
	{
		save = i;
		while (c[save++] != ':')
			len++;
		if (j == 0)
			s = malloc(sizeof (char) * len + 1);
		s[j++] = c[i++];
	}
	*ptr = i;
	len = ft_atoi(s);
	if (s != NULL)
		free(s);
	return (len);
}

char	*get_str(char *c, int *ptr)
{
	int			i;
	int			len;
	char		*s;
	int			save;
	int			j;

	j = 0;
	i = *ptr;
	len = 0;
	while (c[i] != '\n')
	{
		save = i;
		while (c[save ++] != '\n')
			len++;
		if (j == 0)
			s = malloc(sizeof(char) * len + 1);
			s[j++] = c[i++];
	}
	s[j] = '\0';
	*ptr = i;
	return (ft_strdup(fr_trim(s)));
}

struct tpoint	*file_read(int count, int fd)
{
	int				i;
	struct tpoint	*st;
	struct tpoint	*stfirst;
	char			*c;

	c = (char *) malloc(sizeof (char) * count);
	read(fd, c, count);
	i = 0;
	st = malloc(sizeof (t_point));
	stfirst = st;
	while (1)
	{
		st->next = malloc(sizeof (t_point));
		st->num = get_num(c, &i);
		i++;
		st->str = get_str(c, &i);
		if (st->num == 1000000000)
		{
			st->next = 0;
			break ;
		}
		st = st->next;
	}
	free(c);
	return (stfirst);
}

int	file_size_count(char *file_name)
{
	int		count;
	int		fc;
	char	*c;

	count = 0;
	fc = open(file_name, O_RDONLY);
	if (fc == -1)
		write(1, "DIC ERROR", 9);
	else
	{
	c = (char *)malloc(sizeof (char));
		while (read(fc, c, 1))
			count ++;
		free(c);
	}
	return (count);
}

void	file_parsing(char *file_name, char *argv )
{
	int						fd;
	struct tpoint			*stfirst;
	long unsigned int		count;
	struct tpoint			*st;

	count = file_size_count(file_name);
	stfirst = NULL;
	if (count > 0)
	{
		fd = open(file_name, O_RDONLY);
		stfirst = file_read(count, fd);
		count = ft_atoi(argv);
		if (count < 0)
			write(1, "ERROR", 5);
		else
			print_numbs(stfirst, count);
		write(1, "\b", 1);
	}
	st = stfirst;
	while (st -> next != 0)
	{
		free(st -> str);
		free(st);
		st = st -> next;
	}
}
