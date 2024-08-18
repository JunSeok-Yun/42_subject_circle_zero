/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junseyun <junseyun@student.42gyenongs      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:49:04 by junseyun          #+#    #+#             */
/*   Updated: 2024/03/18 16:23:28 by junseyun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*temp;

	if (!lst || !f)
		return (0);
	temp = 0;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!(new_node))
		{
			ft_lstclear(&temp, del);
			return ((void *)(0));
		}
		ft_lstadd_back(&temp, new_node);
		lst = lst->next;
	}
	new_node = 0;
	return (temp);
}
