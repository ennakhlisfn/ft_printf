/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:59:30 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/06 18:36:01 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr(int n)
{
	long	nbr;
	char	c;
	int		x;
	int		count;

	x = 1;
	count = 0;
	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		count++;
	}
	while (nbr / x >= 10)
		x *= 10;
	while (x > 0)
	{
		c = nbr / x + '0';
		write(1, &c, 1);
		nbr = nbr % x;
		x /= 10;
		count++;
	}
	return (count);
}
/*
#include <stdio.h>

int main()
{
	printf("\n%d",ft_putnbr(1337));
}*/
