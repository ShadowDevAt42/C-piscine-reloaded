/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:55:46 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/14 14:11:38 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>

int	main(void)
{
	printf("Factorial of 5: %d\n", ft_recursive_factorial(5));   //120
	printf("Factorial of 0: %d\n", ft_recursive_factorial(0));   //1
	printf("Factorial of -5: %d\n", ft_recursive_factorial(-5)); //0
	printf("Factorial of 10: %d\n", ft_recursive_factorial(10)); //3628800
	return (0);
}*/
