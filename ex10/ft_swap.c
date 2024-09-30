/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:20:45 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/30 00:34:59 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int x;
	int y;

	x = 42;
	y = 21;
	printf("Avant : x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Après : x = %d, y = %d\n", x, y);
	return (0);
}*/
