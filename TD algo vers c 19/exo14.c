// algo qui calcule la somme de fraction 1/N
#include<stdio.h>
int main()
{   float N, S, i;
    printf("entrer la valeur max : 1/");
    scanf("%f",&N);
    S=0;
    for ( i = 1; i <=N; i++)
    {
        S=S + (1/i);
    }
    printf("la somme des fractions est %.2f\n",S);
    return (0);
}