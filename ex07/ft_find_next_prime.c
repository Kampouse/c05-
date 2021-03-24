/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 08:33:12 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/24 09:03:46 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int input)
{
	int		iterator;
	int		output ;

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

int	ft_find_next_prime(int input)
{
	int		found;
	int		inc;

	inc = 0;
	found = 0;
	while (found != 1)
		found = ft_is_prime(input + ++inc);
	if (found == 1)
		return (input + inc);
	return (0);
}
