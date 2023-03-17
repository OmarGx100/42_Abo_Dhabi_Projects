/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_process.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skabeer <skabeer@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 21:04:27 by skabeer           #+#    #+#             */
/*   Updated: 2022/08/21 21:16:11 by skabeer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_PROCESS_H
# define FILE_PROCESS_H

int				get_num(char *c, int *ptr);
char			*get_str(char *c, int *ptr);
struct tpoint	*fileread(int count, int fd);
int				file_size_count(char *filename);
void			file_parsing(char *filename, char *argv);
#endif
