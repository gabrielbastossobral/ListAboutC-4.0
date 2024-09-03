/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:42:33 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/03 10:03:00 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		if (base[i] >= 9 && base[i] <= 13 || base[i] == 32)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_value(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == str)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	number;
	int	sign;
	int	size;
	int	value;

	size = 0;
	sign = 1;
	number = 0;
	if (check_base(base))
	{
		while ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = -sign;
			str++;
		}
		while (base[size])
			size++;
		while (*str)
		{
			value = get_value(*str, base);
			if (value == -1)
				break ;
			number = number * size + value;
			str++;
		}
	}
	return (number * sign);
}

// int	main(void)
// {
// 	char str[] = "1A3";
// 	char base_bin[] = "0123456789ABCDEF";
// 	int number;
// 	number = ft_atoi_base(str, base_bin);
// 	printf("The number is %d\n", number);  // Output should be 11
// 	return (0);
// }