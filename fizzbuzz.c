#include <unistd.h>
void   ft_putchar(char c)
{
     write(1, &c, 1);
}
void ft_putstr(char *str)
{
  while (*str)
    ft_putchar(*str++);
}
int main()
{
  int i;
  i = 1;
  while (i <= 100)
  {
    if (i % 3 == 0)
      ft_putstr("fizz\n");
    else if (i % 5 == 0)
      ft_putstr("buzz\n");
    else if (i % 5 == 0 && i % 3 == 0)
      ft_putstr("fizzbuzz\n");
    else
    {
      if (i >= 0 && i <= 9)
      {
        ft_putchar(i + '0');
        ft_putchar('\n');
      } else {
        ft_putchar(i / 10 + '0');
        ft_putchar(i % 10 + '0');
        ft_putchar('\n');
      }
    }
    i++;
  }
}