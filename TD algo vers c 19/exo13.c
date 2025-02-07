//algo qui calcule la multiplication de 1 jusqu'a N
#include<stdio.h>
 int main()
 {
    int i, N, S;
    printf("Entrer N :");
    scanf("%d",&N);
    S=1;
    for ( i = 1; i <=N; i++)
    {
        S=S*i;
    }
    printf("la multiplication de 1 à %d est %d\n",N ,S);
    return (0);
 }