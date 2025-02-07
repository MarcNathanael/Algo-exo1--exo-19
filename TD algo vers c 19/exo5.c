    //  TSY MANORATRA ZAVATRA tsy ahyyyyy
#include <stdio.h>
//stdio: standard Impout output
#include <math.h>
void resolution2nd(void )
{
   float a,b,c,x,x1,x2,delta,r,i;
//   entrer les coefficient 
    printf("la valeur de a");
    scanf("%f",&a);
    printf("la valeur de b");
    scanf("%f",&b);
    printf("la valeur de c");
    scanf("%f",&c);
     
    if(a==0)
    // Devient une equation du 1ere degrer 
    {
        if(b!=0)
        {   
            x=(-c/b);
            printf("la solution est x=%.2f\n",x);
        }
        else
        {   
            if(c == 0)
            {
                printf("la solution est l'ensemble R\n");
            }
            else
            {
                printf("pas de solution\n");
            }
        }
    }
//  equation du 2nd degrer 
    else if (a != 0)
    {
        delta= (b*b)-(4*a*c);
        if( delta > 0)
        // admet 2 solutions distinct 
        {
            x1=(-b -sqrt(delta))/(2*a);
            x2=(-b +sqrt(delta))/(2*a);
            
            printf("la solution 1 est x1 = %.2f\n",x1);
            printf("la solution 2 est x2 = %f\n",x2);
        }
        else if (delta == 0)
        // solution reel unique
        {   x=-b/(2*a);
            printf("la solution unique est x= %.2f\n",x);
        }
        // admet des solutions complexe 
        else if(delta < 0)
        {   r=-b/(2*a);
            i= sqrt(delta*(-1))/(2*a);

            printf("la solution complexe 1 est x1=%.2f+i(%.2f)\n",r,i);
            printf("la solution complexe 2 est x2=%.2f-i(%.2f)\n",r,i);
        }
        // RETURN EST UNE fonction
    
    }
}
    


int main()
{
     while(1)
    {
        resolution2nd();
    }
    return (0);

} 


 

//y=fonction(x) = cos(x)+log(x)
//  le ao anaty parenthese parametre de la fonction 
/*float fonction(float x)
{
    float y;
    y=cos (x) +log(0)
    return (y);
}*/
    

