/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:30:33 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/02 09:14:38 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	number;
	int	sign;
	int	isnumber;

	sign = 1;
	number = 0;
	isnumber = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str && isnumber)
	{
		if (*str >= '0' && *str <= '9')
			number = number * 10 + (*str - '0');
		else
			isnumber = 0;
		str++;
	}
	return (number * sign);
}

// int main(void)
// {
// 	char *s = " ---+--+1234ab567";
// 	printf("%d", ft_atoi(s));
// 	return (0);
// }