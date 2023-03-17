/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:35:52 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/18 14:19:51 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*looping_function(int size, char *sep, char **strs, char *the)
{
	int	arr[4];

	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 0;
	arr[3] = 0;
	while (arr[1] < size)
	{
		while (strs[arr[1]][arr[3]] != '\0')
			the[arr[2]++] = strs[arr[1]][arr[3]++];
		arr[3] = 0;
		while (sep[arr[3]] != '\0' && arr[1] < size - 1)
			the[arr[2]++] = sep[arr[3]++];
		arr[3] = 0;
		arr[1]++;
	}
	the[arr[2]] = '\0';
	return (the);
}

int	ft_calclength(char **string, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	j = 0;
	if (string[0][0] == '\0')
		return (0);
	while (i < size)
	{
		j = 0;
		while (string[i][j++] != '\0')
			count++;
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*the;

	if (size == 0)
		return (malloc(1));
	if (ft_calclength(strs, size) <= 0)
		return (0);
	the = malloc(ft_calclength(strs, size) + sizeof (sep) * (size - 1) + 1);
	if (the)
	{
		the = looping_function(size, sep, strs, the);
		return (the);
	}
	return (0);
}
