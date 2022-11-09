// Fichier contenant les divers fonctions utilisé dans notre code
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  


// Fonction permettant d'afficher le nombre d'allumettes ainsi qu'une représentation graphique des allumettes restantes
int AffichageAllumette(int nombre){
    for (int x=0; x<nombre; x++){
        printf(" |");
    }
    printf("  Il reste %d allumettes \n",nombre);
}

// Fonction permettant d'afficher le nombre d'allumettes que l'ordinateur souhaite enlever
void ChoixOrdi(int Nb_ordi){ 
    printf("\n C'est a l'ordinateur de jouer, celui ci choisi d'enlever %d allumettes\n\n",Nb_ordi);
}

// Fonction permettant d'afficher à qui est le tour de jouer
void AvotreTour(char pseudo){
    printf("\nC'est a %c de jouer !  \nVous devez choisir un nombre d'allumettes entre 1 et 3.\n",pseudo);
}

// Fonction permettant d'afficher le cadre graphique avec le numéro du tour
void affichageTour(int cpt){
    printf("\n ---------------------------------------------------");
    printf("\n *****************");
    printf("\n * TOUR NUMERO %d *",cpt);
    printf("\n ***************** \n");
}

// Fonction permettant de désigner qui commence
int QuiCommence(){
    srand(time(NULL));
    int NbAleatoire=rand()%2+1;
    return NbAleatoire;
}

// Fonticon permettant de tirer un nombre aléatoire
int NbAleatoire(){
    srand(time(NULL));
    int NbAleatoire=rand()%3+1;
    return NbAleatoire;
}

// Fonction qui affiche le début du jeu ( avec le titre et le début des rêgles)
void Welcome(){
    printf("\n\n                     **********************\n");
    printf("                     * Jeu des allumettes *\n");
    printf("                     **********************\n\n\n");

    printf("Bonjour et bienvenue dans le jeu des allumettes.\nLe jeu est constitue de 30 allumettes, chaque tour vous pouvez en choisir 1, 2 ou 3.\nL'objectif est que votre adversaire tire la derniere allumettes, a ce moment la\ncelui qui tire la derniere allumette clos la partie et donc perd. \n");
}

// Fonction permettant de vider le Buffer pour ne pas faire planter le jeu aux étapes de scan.
void viderBuffer()
{
  int c;
  while((c=getchar()) != EOF && c != '\n');
 
}