/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asicat <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:40:11 by asicat            #+#    #+#             */
/*   Updated: 2018/11/06 14:03:16 by asicat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		fac;

	fac = 1;
	res = 1;
	if (nb > 12)
		return (0);
	while (fac <= nb)
	{
		res = res * fac;
		fac++;
	}
	return (res);
}
