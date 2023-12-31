/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mscheman <mathieu.petru@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:32:17 by mscheman          #+#    #+#             */
/*   Updated: 2023/11/19 16:09:03 by mscheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	if (!str || !*str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dlen;

	dlen = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != 0)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = 0;
	return (dest);
}

char	*ft_bzero(char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}

char	*ft_recalloc(char *src, size_t bytes, int iscalloc)
{
	char	*tmp;

	tmp = NULL;
	if (iscalloc == 1)
		src = NULL;
	if (!src || iscalloc == 1)
	{
		src = malloc(sizeof(char) * (bytes + 1));
		ft_bzero(src, bytes);
		return (src);
	}
	tmp = malloc(sizeof(char) * (ft_strlen(src) + 1));
	ft_strncpy(tmp, src, ft_strlen(src) + 1);
	free(src);
	src = malloc(sizeof(char) * (ft_strlen(tmp) + bytes + 1));
	src = ft_bzero(src, ft_strlen(tmp) + bytes + 1);
	ft_strncpy(src, tmp, ft_strlen(tmp));
	free(tmp);
	return (src);
}
