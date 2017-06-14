#include <stdio.h>
#include <stdlib.h>

float prixbase;
int age;

void main ()
{
    puts("entrer le prix de base du billet :\n");
    scanf("%f",&prixbase);
    puts("entrer l'age du passager :\n");
    scanf("%d",&age);
    if(age<2)
    {
         puts("c'est gratuit");
    }
    else if(age<10)
    {
        printf("%f",prixbase/2);
    }
    else if (age<27 || age>70)
    {
        printf("%f",prixbase*0.90);
    }
    else
    {
        printf("Vous devez payer : %f",prixbase);
    }
}
