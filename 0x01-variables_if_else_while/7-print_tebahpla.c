#include <stdio.h>
int main()
{
    char ch = 'z';
    while (ch >= 'a')
    {
        putchar(ch);
        ch--;
    }
    putchar('\n');
    return 0;
}