/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseyun <junseyun@student.42gyenongs      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:57:48 by junseyun          #+#    #+#             */
/*   Updated: 2024/03/04 20:25:32 by junseyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*arr;

	arr = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		arr[i] = (unsigned char)value;
		i++;
	}
	return (arr);
}
