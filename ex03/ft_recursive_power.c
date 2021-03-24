/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 16:40:12 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/24 08:10:29 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nbr, int base)
{
	if (base == 0)
		return (1);
	else
		return (nbr *= ft_recursive_power(nbr, base - 1));
}
