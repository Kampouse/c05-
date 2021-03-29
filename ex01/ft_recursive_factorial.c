/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:20:13 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/29 12:07:07 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (0);
	else
		return (n * ft_recursive_factorial(n - 1));
}
