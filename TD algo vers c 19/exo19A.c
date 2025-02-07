// algo nombre premiers entre eux
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
    if (a==1)
    {
        printf("les nombre a et b sont premiers entre eux");
    }
    else if(a!=1)
    {
        printf("les nombres a et b ne sont pas permiers entre eux");
    }
    return (0);
}