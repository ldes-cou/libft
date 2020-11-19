/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:53:29 by ldes-cou          #+#    #+#             */
/*   Updated: 2020/11/19 11:08:00 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while(i < n && s1[i] == s2[i])
		i++;
	return(s1 - s2);
}

