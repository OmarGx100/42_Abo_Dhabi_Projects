/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:16:20 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/18 12:26:35 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		size_of_src;
	char	*ptr;
	int		i;

	i = 0;
	size_of_src = 0;
	while (src[size_of_src] != '\0')
		size_of_src ++;
	ptr = (char *) malloc(sizeof (char) * (size_of_src + 1));
	if (!ptr)
		return (src);
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
