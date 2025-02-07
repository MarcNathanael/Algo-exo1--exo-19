// Algo qui informe le signe d'un nombre 
#include <stdio.h>


int main()
{   
    int n;
    printf("Veuiller entrer un nombre\n");
    scanf("%d",&n);
// jamais mettre de \n a scanf 
    if (n>0)
    {   
        printf("ce nombre est positif\n");
    }
    else if(n<0)
    {
        printf("ce nombre est negatif\n");
    }
    else
    {
        printf("ce nombre est neutre");
    }
    return (0);
}