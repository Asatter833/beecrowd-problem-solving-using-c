#include <stdio.h>

int main()
{
    int X, Y, rest, i;
    scanf("%d%d", &X, &Y);

    if (X <= Y)
    {
        for (i = X + 1; i < Y; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
                printf("%d\n", i);
        }
    }
    else
    {
        for (i = Y + 1; i < X; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
                printf("%d\n", i);
        }
    }
}