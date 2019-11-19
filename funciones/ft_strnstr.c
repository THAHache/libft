/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <joserabasot@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:52:49 by jperez-r          #+#    #+#             */
/*   Updated: 2019/11/19 16:38:36 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if (needle[0] == NULL)
		return(haystack);
	while (haystack[i] != '\0' && i < len)
	{
		k = i;
		while (haystack[k] == needle[j])
		{
			if (needle[j] == '\0')
				return(haystack[i]);
			k++;
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}