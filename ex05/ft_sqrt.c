/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:16:05 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/29 12:16:29 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int num)
{
	float	x;
	float	y;
	double	minmum;

	x = num;
	y = 1;
	minmum = 0.000001;
	while (x - y > minmum)
	{
		x = (x + y) / 2;
		y = num / x;
	}
	if (x < 0)
		return (0);
	return (x);
}
