/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 01:44:19 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/30 02:05:40 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

/*#include <stdio.h>

int	ft_is_non_empty(char *str)
{
	// Renvoie 1 si la chaîne n'est pas vide, sinon 0
	return (str[0] != '\0');
}

int	main(void)
{
	// Exemple de tableau de chaînes de caractères
	char *tab[] = {"hello", "", "world", "", "42", 0};

	// Appel de ft_count_if pour compter les chaînes non vides
	int count = ft_count_if(tab, &ft_is_non_empty);

	printf("Number of non-empty strings: %d\n", count); // Devrait afficher 3
	return (0);
}*/
