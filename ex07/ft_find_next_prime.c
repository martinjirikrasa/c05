/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrasa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:56:17 by mkrasa            #+#    #+#             */
/*   Updated: 2023/07/15 20:56:20 by mkrasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	while (nb % i != 0)
	{
		i++;
	}
	if (nb == i)
		return (nb);
	else
		return (ft_is_prime(nb + 1));
}

int	ft_find_next_prime(int nb)
{
	int	result;

	result = ft_is_prime(nb);
	return (result);
}
/*
#include <stdio.h>
int main (void)
{
	int i = 654;
	int result;
	result = ft_find_next_prime(i);
	printf("%d", result);
} */
