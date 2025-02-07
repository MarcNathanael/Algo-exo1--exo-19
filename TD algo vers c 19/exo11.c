// Algo qui calcule le factoorielle d'un nombre N
#include<stdio.h>
int main()
{   
    int i,N;
    double f;
    printf("Entrer le nombre N: ");
    scanf("%d",&N);
    f=1;
    i=1;
    while (i<N)
    {   
        i++;
        f=f*i;
       
    }
    printf("N!=%.0f\n",f);
    return 0;
}