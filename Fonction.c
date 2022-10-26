// Fichier contenant les divers fonctions utilisé dans notre code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int AffichageAllumette(int nombre){
    for (int x=0; x<nombre; x++){
        printf(" |");
    }
    printf("  Il reste %d allumettes \n",nombre);
}

void ChoixOrdi(int Nb_ordi){ 
    printf("\n C'est a l'ordinateur de jouer, celui ci choisi d'enlever %d allumettes\n\n",Nb_ordi);
}

void affichageTour(int cpt){
    printf("\n ---------------------------------------------------");
    printf("\n *****************");
    printf("\n * TOUR NUMERO %d *",cpt);
    printf("\n ***************** \n");
}

int QuiCommence(){
    srand(time(NULL));
    int NbAleatoire=rand()%2+1;
    return NbAleatoire;
}

int NbAleatoire(){
    srand(time(NULL));
    int NbAleatoire=rand()%3+1;
    return NbAleatoire;
}

void Welcome(){
    printf("\n\n                     **********************\n");
    printf("                     * Jeu des allumettes *\n");
    printf("                     **********************\n\n\n");

    printf("Bonjour et bienvenue dans le jeu des allumettes.\nLe jeu est constitue de 30 allumettes, chaque tour vous pouvez en choisir 1, 2 ou 3.\nL'objectif est que votre adversaire tire la derniere allumettes, a ce moment la\ncelui qui tire la derniere allumette clos la partie et donc perd. \n");
}

