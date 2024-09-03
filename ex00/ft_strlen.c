/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:18:01 by gabastos          #+#    #+#             */
/*   Updated: 2024/08/29 16:56:24 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//const char	*ft_strcpy(const char *str, char *dest);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

// const char	*ft_strcpy(const char *str, char *dest)
// {
// 	char	*retrn;

// 	retrn = dest;
// 	while (*str != '\0')
// 	{
// 		*dest = *str;
// 		dest++;
// 		str++;
// 	}
// 	*dest = '\0';
// 	return (retrn);
// }

// int main(int argc, char const *argv[])
// {	
// 	if (argc != 2)
// 	{
// 		printf("Error");
// 		return (-1);
// 	}
// 	char phrase[50];
// 	int result;
// 	ft_strcpy(argv[1], phrase);
// 	result = ft_strlen(phrase);
// 	printf("%d", result);
// 	return 0;
// }