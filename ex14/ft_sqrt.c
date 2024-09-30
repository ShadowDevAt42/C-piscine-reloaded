/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:00:38 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/30 00:59:21 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("Square root of 16: %d\n", ft_sqrt(16));//4
	printf("Square root of 25: %d\n", ft_sqrt(25));//5
	printf("Square root of 10: %d\n", ft_sqrt(10));//0
	printf("Square root of -4: %d\n", ft_sqrt(-4));//0
	printf("Square root of 2147395600: %d\n", ft_sqrt(2147395600));//46340
	return (0);
}*/
