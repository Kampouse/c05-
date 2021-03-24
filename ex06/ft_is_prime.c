/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 07:41:13 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/24 09:03:51 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"
int	ft_is_prime(int input)
{
	int		iterator;
	int		output;

	iterator = 2;
	output = 0;
	if (input <= 1)
		return (0);
	while (iterator <= input)
	{
		if (input == iterator)
			return (1);
		else if (input % iterator == 0)
			return (0);
		iterator++;
	}
	return (0);
}
