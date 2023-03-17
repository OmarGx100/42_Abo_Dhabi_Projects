/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:57:53 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/13 20:23:58 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	to_find_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1[0] == '\0' || s2[0] == '\0' || n == 0)
		return (0);
	while ((i < n - 1) && (s1[i] == s2[i]) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = ft_strncmp(&str[i], to_find, to_find_length(to_find));
			if (j == 0)
				return (str + i);
		}
		i++;
	}
	return (0);
}
