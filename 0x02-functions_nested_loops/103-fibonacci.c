#include <stdio.h>

int main(void)
{
    unsigned long fib1 = 1, fib2 = 2, next = 0, sum = 0;
    sum += fib2;

    while (next <= 4000000)
    {
        next = fib1 + fib2;
        if (next % 2 == 0)
        {
            sum += next;
        }
        fib1 = fib2;
        fib2 = next;
    }
    printf("%lu\n", sum);

    return 0;
}
