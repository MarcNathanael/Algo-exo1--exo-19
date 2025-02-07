// algo qui affiche la somme de 1/1+1/2+...+1/N
#include<stdio.h>
int main()
{
    int i;
    double s, f, n;
    printf("Entrer la valeur 1/");
    scanf("%lf",&n);

    s=0;
    f=1;
    for ( i = 1; i <=n ; i++)
    {
        f=f*i;      //creation des factorielles
        s=s+(1/f);
    }
    printf("la somme S=%lf",s);
    return (0);

}