/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishakuro <ishakuro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:16:24 by ishakuro          #+#    #+#             */
/*   Updated: 2021/11/15 10:03:22 by ishakuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void memccpy_test(void)
{
	char src[] = "test basic du memccpy !";
	char buff1[25];
	char buff2[25];
	char *r1 = memccpy(buff1, src, 'z', 22);
	char *r2 = ft_memccpy(buff2, src, 'z', 22);
	//char *r2 = NULL;

	if (r1 == r2)
		printf("Memccpy OK\n");
		return ;
	printf("KO!\n");
}

int main(void)
{
	memccpy_test();
	return (0);
}