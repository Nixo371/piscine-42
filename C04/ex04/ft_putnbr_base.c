/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nucieda- <nucieda-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:23:00 by nucieda-          #+#    #+#             */
/*   Updated: 2023/11/30 20:50:52 by nucieda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr(int nb, char *base, int len)
{
	char	n;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb, base, len);
	}
	else if (nb >= len)
	{
		ft_putnbr(nb / len, base, len);
		n = base[nb % len];
		write(1, &n, 1);
	}
	else
	{
		n = base[nb % len];
		write(1, &n, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (ft_check_base(base))
		return ;
	while (base[i])
		i++;
	ft_putnbr(nbr, base, i);
}

/*
#include <stdio.h>
int main()
{
	int num = 0;
	char base[] = "01";
	
	ft_putnbr_base(num, base);
}
*/