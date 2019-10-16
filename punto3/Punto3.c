#include<stdio.h>
#include<stdlib.h>

int main()
{
    int matriz[3][4]={{3,4,3,7},{2,8,4,5},{1,5,6,2}}, i, j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }
}

void silla(int m[][])
