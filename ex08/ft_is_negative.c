/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:06:31 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/13 21:08:55 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

/*int	main(void)
{
	ft_is_negative(-5);  // Devrait afficher 'N'
	write(1, "\n", 1);   // Pour ajouter une nouvelle ligne après l'affichage

	ft_is_negative(0);   // Devrait afficher 'P'
	write(1, "\n", 1);   // Pour ajouter une nouvelle ligne après l'affichage

	ft_is_negative(10);  // Devrait afficher 'P'
	write(1, "\n", 1);   // Pour ajouter une nouvelle ligne après l'affichage

	return (0);
}*/
