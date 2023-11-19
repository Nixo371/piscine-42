#include <unistd.h>
#include <stdio.h>

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

void ft_putnbr(int nb)
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
	while (nb / i)
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

int main()
{
	int arr[7] = {0, 10, 100, -100, 6666, __INT32_MAX__, -__INT32_MAX__ - 1};

	for (int i = 0; i < 7; i++)
	{
		ft_putnbr(arr[i]);
		printf(" - %d\n", arr[i]);
	}
}
