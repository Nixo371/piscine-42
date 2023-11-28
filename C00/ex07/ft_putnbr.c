/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:47:00 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/26 14:21:30 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_neg_num(int nb, int i)
{
	char	num;

	if (nb < 0)
	{
		write(1, "-", 1);
		num = (char)(-(nb / i) + 48);
		write(1, &num, 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	char		num;
	long int	i;

	i = 1;
	while (nb / (i * 10))
		i *= 10;
	if (ft_neg_num(nb, i))
	{
		nb = -(nb % i);
		i /= 10;
	}
	while (i > 0 && nb / i)
	{
		num = (char)((nb / i) + 48);
		write(1, &num, 1);
		i /= 10;
		if (nb < 10)
			break ;
		nb = nb % (i * 10);
	}
	while (i > 0)
	{
		write(1, "0", 1);
		i /= 10;
	}
}
