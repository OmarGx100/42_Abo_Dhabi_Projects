/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:07:47 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/05 18:11:30 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb(void)
{
	int	hund;
	int	tens;
	int	prim;

	hund = '0';
	while (hund <= '7')
	{
		tens = hund + 1;
		while (tens <= '8')
		{
			prim = tens + 1;
			while (prim <= '9')
			{
				write(1, &hund, 1);
				write(1, &tens, 1);
				write(1, &prim, 1);
				if (hund != '7')
					write(1, ", ", 2);
				prim++;
			}
			tens++;
		}
		hund++;
	}
}
/*int	main(void)
{
	ft_print_comb();
}*/
