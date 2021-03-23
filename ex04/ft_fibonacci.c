/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 17:51:56 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/23 18:03:29 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
int ft_fibbonacci(int index)
{
if (index == 0)
	return 0;
else if(index == 1)
	return 1;

return (ft_fibbonacci( index - 2)  + ft_fibbonacci(index - 1));
}



int main(void)
{
	printf("%d",ft_fibbonacci(10));
}
