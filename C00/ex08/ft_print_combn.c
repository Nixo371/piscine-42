#include <unistd.h>

void ft_print_comb(char n[], int c)
{
	write(1, n, c);
	write(1, ", ", 2);
}

void ft_print_combn(int n)
{
	char	ptrs[n];
	int		i;

	i = 0;
	while (i < n)
	{
		ptrs[i] = i + '0';
		i++;
	}
	while(ptrs[0] < (10 - n + '0'))
	{
		i = 1;
		while (i < n)
		{
			if (ptrs[i] == ('9' - n + i + 1))
			{
				ptrs[i - 1]++;
				while(i < n)
				{
					ptrs[i] = ptrs[i - 1] + 1;
					i++;
				}
			}
			i++;
		}
		write(1, ptrs, n);
		if (ptrs[0] < (10 - n + '0'))
			write(1, ", ", 2);
		ptrs[n - 1]++;
	}
}

int main()
{
	ft_print_combn(1);
}