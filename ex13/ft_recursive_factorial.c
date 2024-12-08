/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:49:19 by marribei          #+#    #+#             */
/*   Updated: 2024/10/25 15:43:42 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		result = nb * ft_recursive_factorial(nb - 1);
	if (result < 0)
		return (0);
	return (result);
}

/*int	main(void)
{
	printf("%d", ft_recursive_factorial(26));
}*/
