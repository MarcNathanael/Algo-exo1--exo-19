// algo qui calcule le pgcd de deux nombre
#include<stdio.h>
int main()
{
    int a, b, r;
    printf("entrer a");
    scanf("%d",&a);

    printf("entrer b");
    scanf("%d",&b);
    do
    {
       r=a%b;
       a=b;
       b=r;
    } while (r>0);
    printf("le pgcd de (a,b) est %d ",a);
    return (0);
}