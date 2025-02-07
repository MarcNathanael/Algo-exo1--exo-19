// algo qui calcule S:1+10+10^2+...+10^n
#include <stdio.h>

int main()
{
    int n, i;
    double u, s;
    printf("entrer le nombre max =10^");
    scanf("%d",&n);
    u=1;
    s=1;
    for ( i = 1; i<=n; i++)
    {
        u=u*10;
        s=s+u;
    }
    printf("la somme de 1 à 10^%d est %.0f\n",n,s);
    return (0);
}
