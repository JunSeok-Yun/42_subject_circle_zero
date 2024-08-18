/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseyun <junseyun@student.42gyenongs      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:07:51 by junseyun          #+#    #+#             */
/*   Updated: 2024/03/11 11:47:59 by junseyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	last;

	last = 0;
	while (s[last])
		last++;
	while (last >= 0)
	{
		if (s[last] == c)
			return ((char *)(s + last));
		last--;
	}
	return (NULL);
}
