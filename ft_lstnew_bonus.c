/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 06:13:40 by jperez-r          #+#    #+#             */
/*   Updated: 2022/10/13 15:00:55 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*lis;

	lis = malloc(sizeof(*lis));
	if (!lis)
		return (0);
	lis->content = (void *)content;
	lis->next = NULL;
	return (lis);
}
