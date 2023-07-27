#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n1, n2, n3, rodada = 1;
    srand(time(NULL));
    while (1)
    {

        for (i = 0; i < 3; i++)
        {
            if (i == 0)
                n1 = rand() % 10 + 1;
            else if (i == 1)
                n2 = rand() % 10 + 1;
            else
                n3 = rand() % 10 + 1;
        }
        printf("#%d Seus números são: %d %d %d\n", rodada, n1, n2, n3);

        if (n1 == n2 && n2 == n3)
        {
            printf("Parabés vc ta rico\n");
            break;
        }
        else
            printf("Perdeu otário\n");
        rodada++;
    }
    return 0;
}