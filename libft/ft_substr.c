/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseyun <junseyun@student.42gyenongs      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:16:38 by junseyun          #+#    #+#             */
/*   Updated: 2024/03/11 16:33:29 by junseyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	char			*arr;

	i = 0;
	j = 0;
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!(arr))
		return (0);
	while (s[i])
	{
		if (j < len && i >= start)
		{
			arr[j] = s[i];
			j++;
		}
		i++;
	}
	arr[j] = 0;
	return (arr);
}
