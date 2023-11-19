#include <unistd.h>

void rush(int x, int y)
{
	int i;

	if (x == 0 || y == 0)
		return;
	write(1, "A", 1);
	i = 2;
	while (i < x)
	{
		write(1, "B", 1);
		i++;
	}
	write(1, "C", 1);

	

	write(1, "\n", 1);
}
int main()
{
	rush(6, 2);
}