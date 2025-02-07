// algo qui affiche le maximum entres plusieurs nombres
#include <stdio.h>
int main()
{   
    int a, nb, max, i;
    printf("Entrer le nombre de nombre ");
    scanf("%d",&nb);
    printf("entrer le nombre1\n ");
    scanf("%d",&max);
    
    for ( i = 2; i <=nb; i++)
    {   
        printf("entrer le nombre%d\n ",i);
        scanf("%d",&a);
        if (max<a)
        {
            max=a;
        }
    }
    printf("le nombre max est %d ",max);
}