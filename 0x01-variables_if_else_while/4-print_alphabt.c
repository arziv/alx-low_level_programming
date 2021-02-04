#include <stdio.h>

int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if ((c !=  'e') && (c != 'q'))
{
putchar(c);
++c;
}
else
{
++c;
}
}
putchar('\n');
return (0);
}
