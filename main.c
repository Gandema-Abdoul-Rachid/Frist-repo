#include <stdio.h>

int main() 
{
    /*
    Declaration des variables de type long int pour pouvoir stoker 
    des valeurs très grande
    */
    long int number,temp;
    int taille,i,j; 
    //Boucle de recupération du nombre saisie par l'utilisateur
    do
    {
        printf("Please enter number : ");
        scanf("%ld",&number);
    }while(number<0);

    temp =  number;     //Pour eviter la perte de la valeur saisie par l'utilisateur
    //Boucle de détermination du nombre de chiffre contenue dans "number"
    for(taille=0;temp;taille++)
    {
        temp /= 10;
    }
    //printf ("le nombre de chiffre contenue dans %ld est : %d",number,i);
    
    int tableau_chiffre[taille]; //Déclaration du tableau qui va contenir les chiffres de "number"
    
    /*Cette boucle nous permet de separer les chiffre de "number" et de les stocker dans "tableau_chiffre"
    */
   temp = number;
    for(i=0;i<taille;i++)
    {
        tableau_chiffre[i] = temp % 10;
        temp /= 10;
    }

    //Trie du tableau en ordre croissant en utilisant l'algoritme de trie par sélection
    for(i=0;i<taille;i++)
    {
        for(j=i+1;j<taille-1;j++)
        {
            if (tableau_chiffre[i]>tableau_chiffre[j])
            {
                temp = tableau_chiffre[i];
                tableau_chiffre[i] = tableau_chiffre[j];
                tableau_chiffre[j] = temp;
            }
        }
    }
    
    printf("\nLes chiffre de contenu dans %ld dont : ",number);
    for(i=0;i<taille;i++)
    {
        printf("%2d",tableau_chiffre[i]);
    }
    return 0;
}