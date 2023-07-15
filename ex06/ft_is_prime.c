/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrasa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:27:49 by mkrasa            #+#    #+#             */
/*   Updated: 2023/07/15 20:28:07 by mkrasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	
	i = 2;
	if (nb < 0)
		return (0);
	while (nb % i != 0)
	{
		i++;
	}
	if (nb == i)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main (void)
{
	int i = 66;
	int result;
	result = ft_is_prime(i);
	printf("%d", result);
} */
