/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:11:52 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/31 10:06:53 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(char input)
{
	int		iterator;
	int		value;

	value = 1;
	iterator = 1;
	if (input < 0)
		return (0);
	while (iterator < input + 1)
		value = value * iterator++;
	return (value);
}
