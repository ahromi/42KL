/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:16:18 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/16 18:22:35 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*to_free;

	if (!lst || !new)
		return ;
	temp = *lst;
	while (temp)
	{
		del(temp->content);
		to_free = temp;
		temp = temp->next;
		free(to_free);
	}
	*lst = (void *)0;
}
