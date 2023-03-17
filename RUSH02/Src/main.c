/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skabeer <skabeer@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:27:48 by skabeer           #+#    #+#             */
/*   Updated: 2022/08/22 10:36:36 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "ft_str_num.h"
#include "file_process.h"
#include "str_funn.h"
#include "print_fun.h"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (ft_atoi(argv[1]) > 4294967295
			|| (argv[1][0] < '0' || argv[1][0] > '9'))
			ft_putstr("ERROR");
		else
			file_parsing("numbers_dict.txt", argv[1]);
	}
	else if (argc == 3)
	{
		if (ft_atoi(argv[2]) > 4294967295)
			ft_putstr("ERROR");
		else
			file_parsing(argv[1], argv[2]);
	}
	else
	{
		write(1, "ERROR", 5);
	}
	return (0);
}
