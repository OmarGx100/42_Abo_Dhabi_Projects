/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:55:28 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/07 14:30:23 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	right_ptr;
	int	left_ptr;

	right_ptr = size - 1;
	left_ptr = 0;
	while (right_ptr >= left_ptr)
	{
		ft_swap(&tab[right_ptr], &tab[left_ptr]);
		right_ptr--;
		left_ptr++;
	}
}
/*int main (void)
{
	int i = 0;
	int arr[]={1,2,3,4,5,6,7,8,9};
	ft_rev_int_tab(arr,9);
	while(i < 9)
	{
		printf("%d",arr[i]);
		i++;
	}
}*/
