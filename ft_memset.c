/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:55:24 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/25 13:35:09 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;
	size_t i;
	
	i = 0;	
	ptr = (unsigned char *)b;
	
	while(i < len)
	{
		*ptr++ = (unsigned char)c;
	}
	return(b);
}
