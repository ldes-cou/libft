/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 10:08:31 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/25 12:29:02 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *str;
	unsigned char a;

	i = 0;
	str = (unsigned char *)s;
	a  = (unsigned char)c;
	while(i < n)
	{
		if(str[i] == a)
			return(str);
		i++;
	}
	return (NULL);
}
