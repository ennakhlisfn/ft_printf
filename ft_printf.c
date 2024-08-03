/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:52:25 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/08 18:18:06 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include"ft_printf.h"

int	ft_cond(const char *format, int i, va_list list)
{
	int		count;

	count = 0;
	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);
	else if (format[i] == '%' && format[i + 1] == 'c')
		count += ft_putchr(va_arg(list, int));
	else if (format[i] == '%' && format[i + 1] == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (format[i] == '%' && format[i + 1] == 'p')
		count += ft_putpointer(va_arg(list, unsigned long));
	else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		count += ft_putnbr(va_arg(list, int));
	else if (format[i] == '%' && format[i + 1] == 'u')
		count += ft_putnbr_u(va_arg(list, unsigned int));
	else if (format[i] == '%' && format[i + 1] == 'x')
		count += ft_puthex(va_arg(list, int));
	else if (format[i] == '%' && format[i + 1] == 'X')
		count += ft_hex(va_arg(list, int));
	else if (format[i] == '%' && format[i + 1] == '%')
		count += ft_putchr('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		q;
	int		i;
	va_list	list;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	count = 0;
	i = 0;
	while (format[i])
	{
		q = ft_cond(format, i, list);
		if (q > 0)
			count += q;
		if (q > 0 || q == -2)
			i++;
		else if (q == -1)
			return (-1);
		else
			count += ft_putchr(format[i]);
		i++;
	}
	va_end(list);
	return (count);
}
/*
#include <stdio.h>

int main()
{
	printf("\n%d\n\n",printf("%s",""));
	printf("\n%d\n\n",ft_printf("%s",""));
	printf("\n%d\n\n", printf("%p", (void *)0));
	printf("\n%d\n\n", ft_printf("%p", (void *)0));
    printf("\n%d\n\n", printf(" %c", '0' - 256));
    printf("\n%d\n\n", ft_printf(" %c", '0' - 256));
    printf("\n%d\n\n", printf("%c ", '0' + 256));
    printf("\n%d\n\n", ft_printf("%c ", '0' + 256));
    printf("\n%d\n\n", printf(" %c %c %c ", '0', 0, '1'));
    printf("\n%d\n\n", ft_printf(" %c %c %c ", '0', 0, '1'));
    printf("\n%d\n\n", printf(" %c %c %c ", ' ', ' ', ' '));
    printf("\n%d\n\n", ft_printf(" %c %c %c ", ' ', ' ', ' '));
    printf("\n%d\n\n", printf(" %c %c %c ", '1', '2', '3'));
    printf("\n%d\n\n", ft_printf(" %c %c %c ", '1', '2', '3'));
    printf("\n%d\n\n", printf(" %c %c %c ", '2', '1', 0));
    printf("\n%d\n\n", ft_printf(" %c %c %c ", '2', '1', 0));
    printf("\n%d\n\n", printf(" %c %c %c ", 0, '1', '2'));
    printf("\n%d\n\n", ft_printf(" %c %c %c ", 0, '1', '2'));
}*/
