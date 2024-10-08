/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:27:19 by ibayandu          #+#    #+#             */
/*   Updated: 2024/10/08 12:26:38 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = 0;
	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dest_length)
		return (src_length + dstsize);
	while (src[i] && i < dstsize - dest_length - 1)
	{
		dst[dest_length + i] = src[i];
		i++;
	}
	dst[dest_length + i] = 0;
	return (dest_length + src_length);
}
