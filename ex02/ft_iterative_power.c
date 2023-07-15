/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrasa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 22:24:14 by mkrasa            #+#    #+#             */
/*   Updated: 2023/07/14 22:24:22 by mkrasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	save;

	save = nb;
	i = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (i < power)
	{
		nb *= save;
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	int num = 2;
	int power = 3;
	int result;
	
	result = ft_iterative_power(num, power);
	printf("%d", result);
	
} */
