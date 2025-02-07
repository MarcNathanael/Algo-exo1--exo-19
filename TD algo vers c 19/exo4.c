// affiche la somme de pls nombre et leurs moyens
#include <stdio.h>
int main()
{   
    int a,nb,s,m,i;

    printf("entrer le nombre de nombre");
    scanf("%d",&nb);
    s=0;
    for ( i = 1; i <=nb ; i++)
    {
       printf("entrer le nombre%d\n",i);
       scanf("%d",&a);
       s=s + a;
    }
    m=s/nb;

    printf("la somme est S=%d\n",s);
    printf("la moyenne est M=%d\n",m);

    return (0);
}