// algo qui affiche 1 a N
#include<stdio.h>
int main()
{   
    int i ,N ;
    printf("Entrer le nombre max");
    scanf("%d",&N);

    for ( i = 1; i <=N; i++)
    {
        printf("%d,",i);
    }
    return 0;
}