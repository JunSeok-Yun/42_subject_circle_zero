/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseyun <junseyun@student.42gyenongs      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:53:21 by junseyun          #+#    #+#             */
/*   Updated: 2024/03/04 20:25:04 by junseyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)ptr1;
	str2 = (unsigned char *)ptr2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] != (unsigned char)str2[i])
			return ((unsigned char)str[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
