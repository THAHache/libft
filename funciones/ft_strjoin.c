/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <joserabasot@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 01:26:12 by jperez-r          #+#    #+#             */
/*   Updated: 2019/12/02 01:37:14 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	i;
	size_t	j;
	size_t	len_s1;
	size_t	len_s2;

	i = 0;
	j = 0;
	len_s1 = ft_substr(s1);
	len_s2 = ft_substr(s2);
	if(!(dst = malloc(sizeof(char) * (len_s1 + len_s2 + 1))))
		return(NULL);
	while (i < len_s1)
	{
		dst[i] = s1[i];
		i++;
	}
	while (j < len_s2)
	{
		dst[i] = s2[j]
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}