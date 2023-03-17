/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 13:39:45 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/17 23:25:53 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	size = (max - min);
	arr = (int *)malloc(sizeof (int) * size);
	if (!arr)
		return (0);
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
