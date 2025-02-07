//algo qui affiche les div de N a saisir
#include<stdio.h>
int main()
{   int N ,i ;
    printf("Entrer N: ");
    scanf("%d",&N);
    i=1;
    while (i<=N)
    {
        if (N%i==0)
        {
           if (i<=N-1)
           {
                printf("%d,",i);
           }
           else
           {
                printf("%d\n",i);
           }
        }
        i++;
    }
    


}