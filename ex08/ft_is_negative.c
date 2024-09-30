/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 21:06:31 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/30 00:31:54 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
	ft_putchar('\n');   // Pour ajouter une nouvelle ligne après l'affichage

	ft_is_negative(0);   // Devrait afficher 'P'
	ft_putchar('\n');   // Pour ajouter une nouvelle ligne après l'affichage

	ft_is_negative(10);  // Devrait afficher 'P'
	ft_putchar('\n');   // Pour ajouter une nouvelle ligne après l'affichage

	return (0);
}*/
