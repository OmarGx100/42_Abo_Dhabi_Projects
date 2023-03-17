/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_fun.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skabeer <skabeer@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:05:11 by skabeer           #+#    #+#             */
/*   Updated: 2022/08/21 22:57:42 by skabeer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_FUN_H
# define PRINT_FUN_H

char	*num_search(struct tpoint *st, long unsigned int x);
void	print_numb(struct tpoint *st, long unsigned int x);
void	print_mul(struct tpoint *st, long unsigned int x,
			long unsigned int limit);
void	print_numbs(struct tpoint *st, long unsigned int x);
#endif
