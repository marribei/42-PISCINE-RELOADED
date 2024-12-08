/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:15:50 by marribei          #+#    #+#             */
/*   Updated: 2024/10/25 15:26:22 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int ac, char **av)
{
	int		fd;
	char	buffer[10];
	size_t	bytes_read;

	if (ac < 2)
		write(1, "File name missing.\n", 19);
	else if (ac > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			write(1, "Cannot read file.\n", 18);
		else
		{
			bytes_read = read (fd, buffer, 10);
			while (bytes_read > 0)
			{
				write(1, buffer, bytes_read);
				bytes_read = read (fd, buffer, 10);
			}
			close (fd);
		}
	}
	return (0);
}
