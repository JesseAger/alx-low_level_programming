#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }

    putchar('\n');
}

int main()
{
    print_alphabet();
    return 0;
}
