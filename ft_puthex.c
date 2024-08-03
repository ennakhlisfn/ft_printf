/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:46:03 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/08 15:48:59 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_puthex(unsigned int n)
{
	char			*hex;
	int				count;
	unsigned int	nbr;

	hex = "0123456789abcdef";
	count = 0;
	nbr = 1;
	while (n / nbr >= 16)
		nbr *= 16;
	while (nbr > 0)
	{
		write(1, &hex[n / nbr], 1);
		n %= nbr;
		nbr /= 16;
		count++;
	}
	return (count);
}
/*
#include <stdio.h>

int main()
{
	printf("\n%d\n",printf("%x",-1));
	printf("\n%d",ft_puthex(-1));
}*/
