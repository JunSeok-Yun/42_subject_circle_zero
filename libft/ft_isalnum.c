/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseyun <junseyun@student.42gyenongs      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:57:12 by junseyun          #+#    #+#             */
/*   Updated: 2024/03/18 14:59:34 by junseyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define RES 8

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (RES);
	else if (c >= '0' && c <= '9')
		return (RES);
	return (0);
}
