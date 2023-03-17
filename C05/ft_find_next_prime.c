/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelma <Omar.mawgood03@eng-st.cu.edu.eg  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:18:25 by oabdelma          #+#    #+#             */
/*   Updated: 2022/08/13 16:05:45 by oabdelma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = nb - 1;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	next_prime;

	if (nb >= 2147483630)
		return (2147483647);
	i = nb + 1;
	next_prime = 2;
	if (nb <= 2)
		return (next_prime);
	while (i)
	{
		next_prime = ft_is_prime(i);
		if (next_prime == 1)
			return (i);
		i++;
	}
	return (next_prime);
}
