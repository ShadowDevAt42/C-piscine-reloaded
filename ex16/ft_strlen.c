/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:21:50 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/14 14:26:10 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

/*#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello, 42!";
	char str2[] = "C'est cool d'apprendre la programmation.";
	char str3[] = "";

	printf("Length of '%s': %d\n", str1, ft_strlen(str1));
	printf("Length of '%s': %d\n", str2, ft_strlen(str2));
	printf("Length of an empty string: %d\n", ft_strlen(str3));
	return (0);
}*/
