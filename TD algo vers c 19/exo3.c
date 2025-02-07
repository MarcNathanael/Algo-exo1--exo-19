// algo qui echange les valeurs entre 3 variable
#include <stdio.h>
int main()
{
    int a ,b ,c ,temp;
    printf("entrer les valeurs de a\n");
    scanf("%d",&a);
    printf("entrer les valeurs de b\n");
    scanf("%d",&b);
    printf("entrer les valeurs de c\n");
    scanf("%d",&c);
    
    temp=a;
    a=b;
    b=c;
    c=temp;

    printf("la valeur de a est %d ,la valeur de b est %d et la valeur de c est %d",a,b,c);
    return (0);
}