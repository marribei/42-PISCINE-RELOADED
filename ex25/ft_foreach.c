/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:41:25 by marribei          #+#    #+#             */
/*   Updated: 2024/10/25 02:09:48 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar('0' + (nbr % 10));
}*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	if (!tab || !f)
		return ;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*int	main(void)
{
	int tab[] = {1, 42, 452, -2147483648};
	int	lenght = 4;

	ft_foreach(tab, lenght, &ft_putnbr);
}*/
