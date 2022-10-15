#include <stdio.h>
#include <stdlib.h>

int main()
{
    char m[2][3];
    int i,j;
    for(i = 0 ; i < 2 ; i++)
    {
        for(j = 0 ; j < 3 ; j++)
        {
            printf("Remplire Vore Matrix M[%d][%d] : ",i,j);
            scanf("%d",&m[i][j]);
        }

    }
    printf("Your Matrix : \n");
    for (int i = 0 ; i < 2 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    getchar();
}
