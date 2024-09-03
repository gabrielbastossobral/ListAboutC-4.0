/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:21:03 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/29 18:15:53 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

// int	ft_changeforint(const char *str)
// {
// 	int	result;

// 	result = 0;
// 	while (*str != '\0')
// 	{
// 		if (*str >= '0' && *str <= '9')
// 		{
// 			result = result * 10 + (*str - '0');
// 		}
// 		str++;
// 	}
// 	return (result);
// }

// int	main(int argc, char const *argv[])
// {
// 	if (argc != 2)
// 	{
// 		printf("Error!");
// 		return (-1);
// 	}
// 	int a;
// 	a = ft_changeforint(argv[1]);
// 	ft_putnbr(a);
// 	return 0;
// }