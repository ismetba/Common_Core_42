/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:56:15 by ibayandu          #+#    #+#             */
/*   Updated: 2024/10/08 10:43:01 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *dest, int c, unsigned int len)
{
	unsigned char	*ptr;

	ptr = dest;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (dest);
}
