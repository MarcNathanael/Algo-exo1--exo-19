// algo qui affiche les nombre paire entre 1 à N
#include <stdio.h>
int main()
{   
    int i, N
    ;
    printf("Entrer le nombre max N: ");
    scanf("%d",&N);
    for ( i = 2; i <=N; i+=2)
    {
        if (i<=N-2)
        {
            printf("%d,",i); 
        }
        else
        {
            printf("%d",i);
        }
        
    }
    
    printf("\n");
    return 0;    
}