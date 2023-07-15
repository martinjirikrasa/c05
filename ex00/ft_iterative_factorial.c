/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrasa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 20:20:36 by mkrasa            #+#    #+#             */
/*   Updated: 2023/07/14 20:20:57 by mkrasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	number;

	number = nb;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		while (nb > 1)
		{
			number *= (nb - 1);
			nb--;
		}
	}
	return (number);
}
/*
int	main(void)
{
	int result;
	int i = 9;
	result = ft_iterative_factorial(i);
	
	printf("result %d", result);
} */
