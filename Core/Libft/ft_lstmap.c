/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iahromi <iahromi@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:39:43 by iahromi           #+#    #+#             */
/*   Updated: 2024/11/16 18:57:44 by iahromi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**tmp;
	t_list	*result;
	int	i;
	int	len;

	if (!lst || !f || !del)
		return ((void *)0);
	i = 0;
	len = ft_lstsize(lst);
	if (!len)
		return ((void *)0);
	tmp = ft_calloc(len, sizeof(t_list *));
	while (i < len)
	{
		tmp[i] = ft_lstnew(f(lst->content));
		if (i != 0)
			tmp[i - 1]->next = tmp[i];
		i++;
		lst = lst->next
	}
	result = *tmp;
	del(tmp);
	return (result);
}
