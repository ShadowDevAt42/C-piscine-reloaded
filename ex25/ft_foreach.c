/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 01:38:38 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/30 02:09:22 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*#include <stdio.h>

void	ft_putnbr(int nb)
{
	printf("%d\n", nb);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};

	// Appel de ft_foreach pour afficher les éléments du tableau
	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}*/