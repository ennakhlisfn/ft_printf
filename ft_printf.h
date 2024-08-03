/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:42:18 by sennakhl          #+#    #+#             */
/*   Updated: 2023/12/07 22:43:12 by sennakhl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *format, ...);
int	ft_putchr(char c);
int	ft_putstr(char *str);
int	ft_putpointer(unsigned long n);
int	ft_putnbr(int n);
int	ft_putnbr_u(int n);
int	ft_puthex(unsigned int n);
int	ft_hex(unsigned int n);

#endif
