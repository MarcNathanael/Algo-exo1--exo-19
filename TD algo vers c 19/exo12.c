//algo qui calcule la somme jusqu'a N
#include<stdio.h>
 int main()
 {
    int i, N, S;
    printf("Entrer N :");
    scanf("%d",&N);
    S=0;
    for ( i = 0; i <=N; i++)
    {
        S=S+i;
    }
    printf("la somme de 1 à %d est %d\n",N ,S);
    return (0);
 }