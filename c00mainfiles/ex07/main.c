#include <stdio.h>

void	ft_putnbr(int n);

int	main(void)
{
	int	n;
	printf("1. Please enter test case for EX07:\n");
	scanf("%i", &n);
	ft_putnbr(n);
	printf("\n2. Please enter test case for EX07:\n");
	scanf("%i", &n);
	ft_putnbr(n);
	printf("\n3. Please enter test case for EX07:\n");
	scanf("%i", &n);
	ft_putnbr(n);
	printf("\n4. Test boundaries number -2147483648\n");
	n = (-2147483648);
	ft_putnbr(n);
	printf("\n5. Test boundaries number 2147483647\n");
	n = 2147483647;
	ft_putnbr(n);
}
