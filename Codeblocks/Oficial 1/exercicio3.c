#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, *p1, *p2;

a = 3;

b = 2;

p1 = &a;
p2 = p1;

*p2 = *p1 + 3; b = b * (*p1);

(*p2)++;

p1 = &b;
printf("%d, %d", p1, p2);
return 0;
}
