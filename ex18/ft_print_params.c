/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:24:30 by asicat            #+#    #+#             */
/*   Updated: 2018/11/06 14:42:00 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		n;

	n = 0;
	while (str[n])
	{
		ft_putchar(str[n]);
		n++;
	}
}

int		main(int argc, char **argv)
{
	int n;

	n = 1;
	while (n < argc)
	{
		ft_putstr(argv[n]);
		ft_putchar('\n');
		n++;
	}
}
