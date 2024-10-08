/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:39:18 by ibayandu          #+#    #+#             */
/*   Updated: 2024/10/08 13:49:33 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void			ft_bzero(void *s, unsigned int n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memcpy(void *dst, const void *src, unsigned int n);
void			*ft_memmove(void *dst, const void *src, unsigned int len);
void			*ft_memset(void *dest, int c, unsigned int len);
unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize);
unsigned int	ft_strlen(const char *str);
int				ft_toupper(int c);
int				ft_tolower(int c);
#endif
