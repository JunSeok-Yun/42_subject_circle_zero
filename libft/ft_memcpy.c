/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseyun <junseyun@student.42gyenongs      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:13:36 by junseyun          #+#    #+#             */
/*   Updated: 2024/03/04 20:25:14 by junseyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	size_t	i;

	i = 0;
	if (dest == 0 && source == 0)
		return (dest);
	while (i < num)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)source)[i];
		i++;
	}
	return (dest);
}
