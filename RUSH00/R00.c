/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   R00.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:44:19 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/06 22:56:42 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char );
void Chose_Right_Condintion(int x, int y,int i, int j);
void	rush(int x , int y);

int	main(void)
{
	rush(13, 1);
	return 0;
}
void Chose_Right_Condintion(int x, int y,int i,int j)
{ 
	if ((i == 0 && j == 0) || ((i == (y - 1) && (j == (x - 1)))))
	{
		ft_putchar('/');
	}
	else if~ (((i == 0) && (j == (x - 1)))||((j == 0) && (i == (y - 1))))
	{
		ft_putchar('\\');
	}
	else if ((((i != 0) && (i != (y - 1))) && ((j != 0) && (j != (x - 1) ))))
	{
		ft_putchar(' ');
	}
	else 
	{
		ft_putchar('*');
	}
}

void	rush(int x , int y)
{
	int i;
	int j;
	if((x <= 0)||(y <= 0) || x > 2147483647 || y > 2147483647 )
	{
		write(1, "Error",5);
	}
	else
	{
	i=0;
	j=0;
	while (i < y)
	{
		while (j < x)
		{
		   	Chose_Right_Condintion(x,y,i,j);	
			j++;
		}
		write(1, "\n", 1);
		j=0;
		i++;
	}
	}
}
