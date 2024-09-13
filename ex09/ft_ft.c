/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:10:21 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/13 21:20:04 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int number;

	number = 0;  // Initialisation de la variable à 0
	printf("Avant: %d\n", number);  // Affichage de la valeur avant la modification
	ft_ft(&number);  // Appel de la fonction ft_ft en passant l'adresse de 'number'
	printf("Après: %d\n", number);  // Affichage de la valeur après la modification
	return (0);
}
