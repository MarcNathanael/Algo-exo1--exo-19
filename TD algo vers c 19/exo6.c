// algo qui affiche la moyenne des notes en fonctionde leurs coefficient
#include <stdio.h>

int main()
{   
    int note, coeff, nb, m, s ,sc ,i ;
    printf("Entrer le nombre de notes");
    scanf("%d",&nb);
    s=0;
    sc=0;
    for ( i = 1; i <=nb; i++)
    {   
        printf("Entrer la note%d\n",i);
        scanf("%d",&note);
        printf("Entrer le coefficient%d\n",i);
        scanf("%d",&coeff);
        sc=sc+coeff;
        s=s+(note*coeff);   
    }
    m=s/sc;
    printf("la moyenne generale des notes est de %d",m);

    return 0;
}