/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_funn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skabeer <skabeer@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:24:05 by skabeer           #+#    #+#             */
/*   Updated: 2022/08/21 23:10:28 by skabeer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_str_num.h"
#include "file_process.h"
#include "str_funn.h"
#include "print_fun.h"

char	*num_search(struct tpoint *st, long unsigned int x)
{
	while (1)
	{
		if (x == (long unsigned int)st->num)
		{
			return (st->str);
			break ;
		}
		st = st->next;
	}
	return (0);
}

void	print_numb(struct tpoint *st, long unsigned int x)
{
	if (x / 100 != 0)
	{
		ft_putstr(num_search(st, x / 100));
		ft_putstr(num_search(st, 100));
	}
	if (x % 100 <= 20)
		ft_putstr(num_search(st, x % 100));
	if (x % 100 > 20)
	{
		x = x % 100;
		ft_putstr(num_search(st, (x / 10) * 10));
		if (x % 10 != 0)
			ft_putstr(num_search(st, (x % 10)));
	}
}

void	print_mul(struct tpoint *st, long unsigned int x,
			long unsigned int limit)
{
	print_numb(st, x / limit);
	ft_putstr(num_search(st, limit));
	print_numbs(st, x % limit);
}

void	print_numbs(struct tpoint *st, long unsigned int x)
{
	if (x >= 1000000000)
		print_mul(st, x, 1000000000);
	else if (x >= 1000000)
		print_mul(st, x, 1000000);
	else if (x >= 1000)
		print_mul(st, x, 1000);
	else if (x >= 100)
		print_numb(st, x);
}
