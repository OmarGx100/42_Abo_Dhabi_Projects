/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 00:02:02 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/05 18:16:07 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	int	x;

	x = 48;
	while (x <= 57)
	{
		write(1, &x, 1);
		x++;
	}
}
/*int main (void)
{
	ft_print_numbers();
}*/
