/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:43:44 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/01 15:10:21 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

void	ft_printnbr(int n)
{
	if (n > 0 && n < 10)
	{
		ft_putchar(n + '0');
		return ;
	}
	ft_printnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	ft_putnbr(int n)
{
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		ft_printnbr(-n);
		return ;
	}
	ft_printnbr(n);
}
