/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:16:05 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/24 07:58:01 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int num)
{
	int		result;

	result = 2;
	if (num == 0 || num == 1)
		return (0);
	else if (result == num)
		return (result);
	else
		++result;
	return (result * result - 1);
}
