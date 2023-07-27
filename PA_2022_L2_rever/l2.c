#include <stdio.h>
int main()
{
    int n1, n2, i, j = 0, dif1, dif2, c = 0; // tam = n2 vai até 1 comeca com n1
    // tem q ser impar
    scanf("%d %d", &n1, &n2);

    dif1 = n2 - n1;
    dif2 = n2 - dif1;

    while (1)
    {
        for (i = 1; i <= n2; i++)
        {
            if (i >= dif1 && i - 1 <= dif2)
            {
                printf("$");
                j++;
            }
            else
            {
                printf("_");
            }
        }
        dif1--;
        dif2++;
        if (j != n2)
            j = 0;
        if (j == n2)
            break;
        printf("\n");
    }
    j = 0;
    while (1)
    {
        if (c > 1)
        {
            for (i = 1; i <= n2; i++)
            {

                if (i >= dif1 && i - 1 <= dif2)
                {
                    printf("$");
                    j++;
                }
                else
                {
                    printf("_");
                }
            }
        }
        c++;
        dif1++;
        dif2--;
        if (j != 1)
            j = 0;
        if(c>1)
        printf("\n");
        if (j == 1)
            break;
    }

    return 0;
}