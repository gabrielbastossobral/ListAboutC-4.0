/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:03:16 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/29 17:20:19 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
		str++;
	}
}

// const char	*ft_strcpy(const char *str, char *dest)
// {
// 	char	*retr;
// 	retr = dest;
// 	while (*str != '\0')
// 	{
// 		*dest = *str;
// 		str++;
// 		dest++;
// 	}
// 	*dest = '\0';
// 	return (retr);
// }
// int main(int argc, char const *argv[])
// {
// 	if (argc != 2)
// 	{
// 		printf("Error");
// 		return (-1);
// 	}
// 	char phrase[50];
// 	ft_strcpy(argv[1], phrase);
// 	ft_putstr(phrase);
// 	return (0);
// }