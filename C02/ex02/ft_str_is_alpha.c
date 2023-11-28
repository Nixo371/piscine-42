/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:16:55 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/28 14:23:47 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z'))
				return (0);
		}
		i++;
	}
	return (1);
}

/*
#include <unistd.h>
int main()
{
	char	*str = "Esta string tiene espacios ademas de letras";
	char	*str2 = "EstaStringNo";

	char	s;
	char	s2;

	s = ft_str_is_alpha(str) + '0';
	s2 = ft_str_is_alpha(str2) + '0';

	write(1, &s, 1);
	write(1, " - str\n", 8);
	
	write(1, &s2, 1);
	write(1, " - str2\n", 9);
}
*/
