/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:26:33 by asicat            #+#    #+#             */
/*   Updated: 2018/11/06 15:30:47 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*res;
	int		n;
	
	n = 0;
	res = malloc(sizeof(int) * (max - min + 1));
	while (min < max)
	{
		res[n] = min;
		n++;
		min++;
	}
	return (res);
}
