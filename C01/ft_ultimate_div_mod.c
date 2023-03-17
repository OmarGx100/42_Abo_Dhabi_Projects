/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 11:20:37 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/07 11:29:56 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

//void ft_putchar(char );
//void ft_putnbr(int);
void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	num1;
	int	num2;

	num1 = *a;
	num2 = *b;
	*a = num1 / num2;
	*b = num1 % num2;
}
/*int main ()
{
	int a = 26;
	int b = 5;
	ft_ultimate_div_mod(&a,&b);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
}*/
