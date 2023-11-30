/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:02:12 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/30 20:52:15 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c)
{
	return (
		c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ');
}

int	ft_is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	ft_is_digit(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(char *str, char *base)
{
	int	i;
	int	j;
	int	num;
	int	len;

	i = 0;
	num = 0;
	len = 0;
	while (base[len])
		len++;
	while (ft_is_digit(str[i], base))
	{
		j = 0;
		num *= len;
		while (base[j] != str[i])
			j++;
		num += j;
		i++;
	}
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	while (ft_is_space(str[i]))
		i++;
	while (ft_is_sign(str[i]))
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	num = ft_atoi(&str[i], base);
	return (num * neg);
}

/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("'%s' -> ft_atoi_base\n", argv[1]);
	printf("Base: %s\n", argv[2]);
	printf("Result: %d\n", ft_atoi_base(argv[1], argv[2]));
}
*/
