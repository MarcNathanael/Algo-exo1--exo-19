// algo qui determine si un nombre est premier ou non
#include <stdio.h>
#include<math.h>
#include <math.h>
int main ()
{   
    
    while (1)
    {
    int n;
    int i;
    int r;
    printf("entrer le nombre ");
    scanf("%d",&n);
   
    for ( i = 2; i < sqrt(n); i++)
    {
        r=n%i;
        if (r==0)
        {
            break;
        }
    }
    if (r==0)
    {
        printf("ce nombre n'est pas premier\n");
    }
    else if (r!=0)
    {
        printf("ce nombre est premier\n");
    }
    }
    
    return (0);
}