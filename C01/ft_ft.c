/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 00:23:15 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/08 12:05:38 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int main(void)
	{
		int x = 5;
		int y =3214;
		int z = 213123;
		printf("%d",x);
		ft_ft(&x);
		ft_ft(&y);
		ft_ft(&z);
		printf("\n%d",x);
		printf("\n%d",y);
		printf("\n%d",z);
	}
