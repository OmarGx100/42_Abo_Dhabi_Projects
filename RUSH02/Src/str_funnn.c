/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_funnn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skabeer <skabeer@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:26:26 by skabeer           #+#    #+#             */
/*   Updated: 2022/08/21 23:00:38 by skabeer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_str_num.h"
#include "file_process.h"
#include "str_funn.h"
#include "print_fun.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count ++;
	return (count);
}

char	*fr_trim(char *str)
{
	int		i;
	int		j;
	int		count;
	char	*trimed_str;

	count = ft_strlen(str);
	i = count - 1;
	while (i >= 0)
	{
		if (str[i] != ' ')
		{
			str[i + 1] = '\0';
			break ;
		}
		i--;
	}	
	i = 0;
	trimed_str = (char *)malloc(sizeof(char) * (count + 1));
	while (str[i] != '\0' && str[i] == ' ')
		i++;
	j = 0;
	while (str[i] != '\0')
		trimed_str[j++] = str[i++];
	free(str);
	return (trimed_str);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, " ", 1);
}

long unsigned int	ft_atoi(char *str)
{
	int					i;
	int					sign;
	long unsigned int	re;

	sign = 1;
	re = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		re *= 10;
		re += str[i] - '0';
		i ++;
	}
	return (re * sign);
}

char	*ft_strdup(char *src)
{
	char	*des;
	int		n;
	int		i;

	n = ft_strlen(src);
	des = (char *) malloc (n * sizeof (char));
	i = 0;
	while (src[i] != '\0')
	{
		des[i] = src[i];
		i ++;
	}
	des[i] = '\0';
	if (src != NULL)
		free(src);
	return (des);
}
