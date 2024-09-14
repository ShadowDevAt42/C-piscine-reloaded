/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:01:47 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/14 19:05:33 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*#include <stdio.h>

int	main(void)
{
	int min = 5;
	int max = 10;
	int *range;
	int i;
	int size;

	range = ft_range(min, max);
	if (range == NULL)
	{
		printf("NULL returned, invalid range!\n");
		return (1);
	}

	size = max - min;
	for (i = 0; i < size; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");

	free(range);

	return (0);
}*/
