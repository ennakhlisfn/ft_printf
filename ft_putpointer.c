/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:34:20 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/07 17:43:13 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putpointer(unsigned long n)
{
	char			*hex;
	int				count;
	unsigned long	nbr;

	if (n == 0)
	{	
		write(1, "(nil)", 5);
		return (5);
	}
	hex = "0123456789abcdef";
	count = 2;
	nbr = 1;
	write (1, "0x", 2);
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
