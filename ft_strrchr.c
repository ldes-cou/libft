/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 09:43:40 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/25 16:19:56 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	
	i = 0;
	while(*s)
	{
		if(s[i] == c)
			return((char *)s + i);
		i++;
	}
	if(s[i] == c)
		return((char *)s + i);
	return(NULL);
}


			
