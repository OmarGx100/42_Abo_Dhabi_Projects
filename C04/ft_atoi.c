/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:12:29 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/11 23:02:14 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow_rec(int i, int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (i);
	return (i * ft_pow_rec(i, (n - 1)));
}

int	ft_atoi(char *str)
{
	int	negative;
	int	res;
	int	i;

	negative = 1;
	res = 0;
	i = 0;
	while (*str <= 32)
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
		str++;
	str--;
	while (*str >= '0' && *str <= '9')
		res += ((*str--) - '0') * ft_pow_rec(10, i++);
	return ((int)(res * negative));
}
