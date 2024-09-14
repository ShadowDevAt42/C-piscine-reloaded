/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:47:45 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/14 13:54:32 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("Factorial of 5: %d\n", ft_iterative_factorial(5));   // 120
	printf("Factorial of 0: %d\n", ft_iterative_factorial(0));   //  1
	printf("Factorial of -5: %d\n", ft_iterative_factorial(-5)); // 0
	printf("Factorial of 10: %d\n", ft_iterative_factorial(10)); // 3628800
	return (0);
}*/
