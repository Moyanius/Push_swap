/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 14:24:02 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/05/09 16:09:39 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*nlst;

	nlst = *lst;
	while (nlst)
	{
		tmp = nlst->next;
		ft_lstdelone(nlst, del);
		nlst = tmp;
	}
	*lst = NULL;
}
