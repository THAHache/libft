/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <joserabasot@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:51:09 by jperez-r          #+#    #+#             */
/*   Updated: 2019/12/10 19:43:20 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strdup(const char *s1)
{
	char	*dst;
	int		i;

	i = 0;
	if (!(dst = malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	free(dst);
	return (dst);
}