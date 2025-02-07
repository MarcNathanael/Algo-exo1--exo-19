// algo qui determine le signe d'un produit de 2 nombre
#include <stdio.h>

int main()
{
    int a,b;
    
    printf("Veiller entrer a\n");
    scanf("%d",&a);
    printf("Veiller entrer b\n");
    scanf("%d",&b);

    if ((a>=0 && b>=0) || (a<=0 && b<=0 ))
    {
        printf("le produit de a et b est positif"); 
    }
    else 
    {
       printf("le produit de a et b est negatif");
    }
     return (0);

}