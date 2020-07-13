#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_numbers(void)
{
	char number = '0';
	while (number < '9')
	{
		ft_putchar(number);
		number++;
	}
}
int main()
{
ft_print_numbers();
}
