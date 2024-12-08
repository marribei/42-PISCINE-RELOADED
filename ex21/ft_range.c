/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marribei <marribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:56:42 by marribei          #+#    #+#             */
/*   Updated: 2024/10/24 18:26:16 by marribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "stdio.h"

int	*ft_range(int min, int max)
{
	int	*int_array;
	int	i;

	int_array = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	if (min >= max)
		return (NULL);
	if (!int_array)
		return (NULL);
	else if (max > min)
	{
		while (min < max)
		{
			int_array[i] = min;
			i++;
			min++;
		}
	}
	return (int_array);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*array;

	min = 240;
	max = 265;
	i = 0;
	array = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d ", array[i]);
		i++;
	}
}*/
