/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <joserabasot@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 22:01:19 by jperez-r          #+#    #+#             */
/*   Updated: 2019/12/01 22:29:45 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s;
	char	*dst;

	i = 0;
	len_s = ft_strlen(s);
	if (!(dst = malloc(sizeof(char) * (len_s + 1))))
		return (NULL);
	dst[0] = '\0';
	if (len_s < start)
		return (dst);
	if (start + len > len_s)
		len = len_s - start;
	while (i < len)
	{
		dst[i] = s[start];
		i++;
		start++;
	}
	dst[i] = '\0';
	return (dst);
}