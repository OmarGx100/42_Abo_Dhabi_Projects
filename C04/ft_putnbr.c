/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:02:22 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/14 13:31:31 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	chart;

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, &"8", 1);
	}
	else if (nb < 0)
	{
		write(1, &"-", 1);
		ft_putnbr(nb / (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		chart = nb % 10 + '0';
		write(1, &chart, 1);
	}	
}
