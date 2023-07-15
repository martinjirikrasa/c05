/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrasa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:46:58 by mkrasa            #+#    #+#             */
/*   Updated: 2023/07/15 19:47:13 by mkrasa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	
	i = 0;
	if (nb < 0)
		return 0;
	while (i * i != nb)
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	int result;
	
	result = ft_sqrt(36);
	printf("%d", result);
} */
