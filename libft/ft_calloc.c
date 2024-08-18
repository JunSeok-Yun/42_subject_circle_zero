/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseyun <junseyun@student.42gyenongs      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:22:59 by junseyun          #+#    #+#             */
/*   Updated: 2024/03/15 12:54:53 by junseyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;

	arr = malloc(size * nmemb);
	if (!arr)
		return (0);
	ft_bzero(arr, size * nmemb);
	return (arr);
}
