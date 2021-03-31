/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:16:05 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/31 16:19:04 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nbr)
{
	long long	iter;

	if (nbr <= 0)
		return (0);
	iter = 0;
	while (iter * iter < nbr)
		++iter;
	if (iter * iter == nbr)
		return (iter);
	return (0);
}
