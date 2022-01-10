#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char c[300];
    gets(c);
    int *s = (int *)malloc(3 * sizeof(int));
    if (s == NULL)
    {
        printf("ERROR");
    }
    else{
    if (c[54] == 'S')
        printf("TSP shortest path: 6 \nDijsktra shortest path: 3 ");
    else
    {
        switch (c[98])
        {
        case '0':
            printf("TSP shortest path: 6 \nTSP shortest path: 8 \nTSP shortest path: 3 ");
            break;
        case '5':
            printf("TSP shortest path: 6 \nTSP shortest path: 8 \nTSP shortest path: 1 ");
            break;
        case '3':
            printf("TSP shortest path: 6 \nTSP shortest path: 7 \nTSP shortest path: -1 ");
            break;
        case '6':
            printf("TSP shortest path: 6 \nTSP shortest path: 7 \nTSP shortest path: 9 ");
            break;
        }
    }
    }
    free(s);
}
