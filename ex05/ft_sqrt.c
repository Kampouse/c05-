/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:16:05 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/23 18:37:37 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdio.h"

int ft_sqrt(int num)
{
int result;
result = 2;
if (num  == 0 || num == 1)
	return 0;
else if(result  == num)
return result;

else	
	++result;
	return (result* result - 1);
}
int main(void)
{
	printf("%d",ft_sqrt(0));
}
