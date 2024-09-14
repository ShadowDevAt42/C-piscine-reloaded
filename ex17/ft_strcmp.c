/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:27:23 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/14 14:35:02 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <stdio.h>


int	main(void)
{
	char str1[] = "Hello, 42!";
	char str2[] = "Hello, 42!";
	char str3[] = "Hello, World!";
	char str4[] = "Hello";
	char str5[] = "Helloé";

	printf("Comparaison de '%s' et '%s': %d\n", str1, str2, 
	ft_strcmp(str1, str2));
	printf("Comparaison de '%s' et '%s': %d\n", str1, str3, 
	ft_strcmp(str1, str3));
	printf("Comparaison de '%s' et '%s': %d\n", str1, str4, 
	ft_strcmp(str1, str4));
	printf("Comparaison de '%s' et '%s': %d\n", str4, str5, 
	ft_strcmp(str4, str5));
	return (0);
}*/
