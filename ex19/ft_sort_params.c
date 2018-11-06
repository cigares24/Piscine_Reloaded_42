/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:42:47 by asicat            #+#    #+#             */
/*   Updated: 2018/11/06 15:17:47 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n])
	{
		ft_putchar(str[n]);
		n++;
	}
}

int     ft_strcmp(char *s1, char *s2)
{
	int     n;

	n = 0;
	while (s1[n] == s2[n])
		n++;
	return (s1[n] - s2[n]);
}

int		main(int argc, char **argv)
{
	int		n;
	int		i;
	char*	swap;

	n = 1;
	while (n < argc)
	{
		i = 1;
		while (i + 1 < argc)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap = argv[i];
				argv[i]	= argv[i + 1];
				argv[i + 1] = swap;
			}
			i++;
		}
		n++;
	}
	n = 1;
	while (n < argc)
	{
		ft_putstr(argv[n]);
		ft_putchar('\n');
		n++;
	}
}
