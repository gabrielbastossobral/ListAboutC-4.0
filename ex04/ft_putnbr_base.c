/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:15:54 by gabastos          #+#    #+#             */
/*   Updated: 2024/09/03 10:02:51 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size_base])
			size_base++;
		while (nbr)
		{
			nbr_final[i] = nbr % size_base;
			nbr = nbr / size_base;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
}

// int main() {
//     ft_putnbr_base(30, "0123456789ABCDEF"); // Hexadecimal
// 	write(1, "\n", 1);
//     ft_putnbr_base(-42, "01");               // Binário
// 	write(1, "\n", 1);
//     ft_putnbr_base(345, "01234567");          // Octal
// 	write(1, "\n", 1);
//     ft_putnbr_base(1234, "poneyvif");        // Base personalizada(octal)
// 	write(1, "\n", 1);
//     ft_putnbr_base(10, "0123456789");        // Decimal
// 	write(1, "\n", 1);
//     ft_putnbr_base(0, "0123456789");         // Zero em decimal
//     return 0;
// }