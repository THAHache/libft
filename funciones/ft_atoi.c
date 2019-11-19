/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-r <joserabasot@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:26:43 by jperez-r          #+#    #+#             */
/*   Updated: 2019/11/19 16:38:41 by jperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int num;

	i = 0;
	neg = 1;
	num = 0;
	if (str[0] == '+' || str[0] == '-')
	{
		if (str[0] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		num *= 10;
		num += (int) str[i];
	}
	return (num * neg);
}