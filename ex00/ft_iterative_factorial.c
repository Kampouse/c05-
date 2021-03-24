/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:11:52 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/24 08:10:45 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(char input)
{
	int		iterator;
	int		value;

	value = 1;
	iterator = 1;
	while (input > 1)
	{
		value *= input;
		input--;
	}
	return (input);
}
