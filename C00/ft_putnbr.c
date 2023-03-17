/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:02:22 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/07 13:44:05 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int	reverse_numb(int a)
{
	int	y;

	y = 0;
	while (a != 0)
	{
		y = (y * 10) + (a % 10);
		a = a / 10;
	}
	return (y);
}

void	print_reverse_num(int y)
{
	char	z;

	while (y != 0)
	{
		z = (y % 10) + 48;
		write(1, &z, 1);
		if ( y / 10 == 1)
		{
			write(1, "0", 1);
			y = y / 10;
		}
		y = y / 10;
	}
}

void	ft_putnbr(int nb)
{
	int	y;

	if (nb == -2147483648)
	{
		write(1, "-214748648", 10);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		y = reverse_numb(nb);
		print_reverse_num(y);
	}
	else if (nb % 10 == 0)
	{
		nb ++;
		y = reverse_numb(nb);
		print_reverse_num(y);
	}
	else
	{
		y = reverse_numb(nb);
		print_reverse_num(y);
	}
}

