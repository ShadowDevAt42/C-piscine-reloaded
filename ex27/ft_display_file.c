/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 01:54:10 by fdi-tria          #+#    #+#             */
/*   Updated: 2024/09/30 02:05:19 by fdi-tria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 4096

void	display_error(char *message)
{
	while (*message)
	{
		write(2, message, 1);
		message++;
	}
	write(2, "\n", 1);
}

int	ft_display_file(char *file_name)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUFFER_SIZE];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		display_error("Cannot read file");
		return (1);
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		display_error("File name missing.");
		return (1);
	}
	else if (argc > 2)
	{
		display_error("Too many arguments.");
		return (1);
	}
	else
	{
		return (ft_display_file(argv[1]));
	}
}
