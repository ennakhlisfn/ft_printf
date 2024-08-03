/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:20:01 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/08 09:29:44 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (str[0] == '\0')
		return (-2);
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	char *c = "";
	printf("\n%d",ft_putstr(c));
}*/
