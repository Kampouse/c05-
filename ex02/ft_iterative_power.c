/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:48:54 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/29 12:08:22 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nbr, int power)
{
	int		res;

	res = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		res *= nbr;
		power--;
	}
	return (res);
}
