/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:18:55 by asicat            #+#    #+#             */
/*   Updated: 2018/11/06 15:25:22 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);
{
	char	*str;
	int		n;

	n = 0;
	while (src[n])
		n++;
	str = malloc(sizeof(char) * n);
	n = 0;
	while (src[n])
	{
		str[n] = src[n];
		n++;
	}
	return (str);
}
