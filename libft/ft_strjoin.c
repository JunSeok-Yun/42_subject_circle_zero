/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseyun <junseyun@student.42gyenongs      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:02:07 by junseyun          #+#    #+#             */
/*   Updated: 2024/03/04 20:27:49 by junseyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_len;
	char	*new_str;
	int		i;
	int		j;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new_str = (char *)malloc(sizeof(char) * total_len);
	if (!(new_str))
		return (0);
	i = 0;
	while (s1[i] != 0)
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		new_str[i + j] = s2[j];
		j++;
	}
	new_str[i + j] = 0;
	return (new_str);
}
