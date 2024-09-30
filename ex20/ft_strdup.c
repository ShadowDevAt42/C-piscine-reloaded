/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 18:58:08 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/30 01:15:01 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*dup;

	length = 0;
	while (src[length] != '\0')
		length++;
	dup = malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *src = "Hello, 42!";
	char *dup;

	dup = ft_strdup(src);
	if (dup == NULL)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}

	printf("Original: %s\n", src);
	printf("Duplicate: %s\n", dup);

	free(dup);

	return (0);
}*/
