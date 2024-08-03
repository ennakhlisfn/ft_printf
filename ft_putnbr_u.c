/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:07:25 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/06 15:18:35 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr_u(int n)
{
	unsigned int	nbr;
	char			c;
	int				x;
	int				count;

	x = 1;
	count = 0;
	nbr = n;
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
	printf("\n%d",ft_putnbr_u(-1));
	printf("\n\n");
	printf("\n%d",printf("%u",-1));
}*/
