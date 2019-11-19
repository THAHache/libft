/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <joserabasot@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:04:49 by jperez-r          #+#    #+#             */
/*   Updated: 2019/11/14 19:08:16 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strrchr(const char *s, int c)
{
	int i;
	int aux;

	i = 0;
	aux = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
		{
			aux = i;
		}
		i++;
	}
	if (aux == 0)
	{
		aux = i;
	}
	return (s[aux]);
}