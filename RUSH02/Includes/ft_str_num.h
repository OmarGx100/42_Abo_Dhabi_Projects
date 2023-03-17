/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_num.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skabeer <skabeer@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:15:39 by skabeer           #+#    #+#             */
/*   Updated: 2022/08/21 21:34:20 by skabeer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_NUM_H
# define FT_STR_NUM_H

typedef struct tpoint
{
	long int		num;
	char			*str;
	struct tpoint	*next;
}	t_point;
#endif
