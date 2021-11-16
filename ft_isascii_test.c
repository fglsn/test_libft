/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:31:58 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/02 10:41:53 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c);

int main(void)
{
	printf("%d\n", ft_isascii('g'));
	printf("%d\n", ft_isascii('5'));
	printf("%d\n", ft_isascii(1079));
	printf("%d\n", ft_isascii('/'));
	return (0);
}