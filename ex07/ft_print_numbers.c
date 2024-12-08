/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:19:03 by marribei          #+#    #+#             */
/*   Updated: 2024/10/24 17:43:20 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i < 58)
	{
		ft_putchar(i);
		i++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
