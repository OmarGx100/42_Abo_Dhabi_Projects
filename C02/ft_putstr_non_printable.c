/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:33:58 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/16 16:14:18 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include<stdio.h>

void	convert_to_hexa(char c)
{
	int	a;
	int	b;

	if (c >= 32)
	{
		write(1, &c, 1);
	}
	else
	{
		a = "0123456789abcdef"[c / 16];
		b = "0123456789abcdef"[c % 16];
		write(1, "\\", 1);
		write(1, &a, 1);
		write(1, &b, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
	{
		write(1, "\\", 1);
		write(1, "0a", 2);
	}
	while (str[i] != '\0')
	{
		convert_to_hexa(str[i]);
		i++;
	}
}

