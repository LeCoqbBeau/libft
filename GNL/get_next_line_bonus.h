/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheman <mathieu.petru@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:32:12 by mscheman          #+#    #+#             */
/*   Updated: 2023/12/14 13:03:22 by mscheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char	*get_next_line(int fd);
int		ft_strlen(char	*str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_bzero(char *s, size_t n);
char	*ft_recalloc(char *src, size_t bytes, int iscalloc);

#endif