// algo qui calcule S= 1!+2!..+N!
#include <stdio.h>
int main()
{
    int i, n;
    double u, s;
    printf("Entrer la valeur max ");
    scanf("%d",&n);
    s=0;
    u=1;
    for ( i = 1; i <=n; i++)
    {
        u=u*i;  //creeat
        s=s+u;
    }
    printf("la somme S est %.0f\n",s);
    return(0);

}