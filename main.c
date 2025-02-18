#include <stdio.h>

int main() 
{
    /*
    Declaration des variables de type long int pour pouvoir stoker 
    des valeurs très grande
    */
    long int number,temp;
    int i;
    //Boucle de recupération du nombre saisie par l'utilisateur
    do
    {
        printf("Please enter number : ");
        scanf("%ld",&number);
    }while(number<0);

    temp =  number;     //Pour eviter la perte de la valeur saisie par l'utilisateur
    //Boucle de détermination du nombre de chiffre contenue dans "number"
    for(i=0;temp;i++)
    {
        temp /= 10;
    }
    
    printf ("%d",i);
    
    return 0;
}