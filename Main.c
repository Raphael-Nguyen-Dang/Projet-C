// Fichier du Main de l'application
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include "Fonction.c"

void main(){

    Welcome();
    int WhoStart = 1;//QuiCommence();
    int NbAllumette = 30;
    int ModeDeJeu;
    int Nb_User1;
    int Nb_User2;
    int Nb_Ordi;
    int compteur;
    printf("\nIl existe 2 modes de jeu : \n [1] - Mode Contre l'ordinateur \n [2] - Mode Multijoueur \nTapez le numero du mode auquel vous voulez jouer : \n");
    scanf("%d",&ModeDeJeu);

    // Choix du mode jeu Contre l'ordinateur
    if(ModeDeJeu == 1){
        do {
            // Le joueur commence 
            if(WhoStart == 1) {
                compteur = 1;
                while(NbAllumette >0){
                    
                    affichageTour(compteur);
                    printf("\nC'est a votre tour de jouer !  \nVous devez choisir un nombre d'allumettes entre 1 et 3.\n");
                    scanf("%d",& Nb_User1 );

                    while (Nb_User1 < 1 || Nb_User1 > 3){
                        printf("Attention à la triche ! Vous devez tirer entre 1 et 3 allumettes!\n");
                        scanf("%d",&Nb_User1);
                    }
                    NbAllumette = (NbAllumette - Nb_User1);
                    AffichageAllumette(NbAllumette);
                    // Si le joueur pioche la dernière allumette : il perds
                    if (NbAllumette == 0){
                        printf("Dommage, l'ordinateur remporte la partie\n");
                    }

                    else{
                        if((NbAllumette - 1) % 4 == 0){
                        Nb_Ordi = 1;
                        NbAllumette = NbAllumette - Nb_Ordi;
                        ChoixOrdi(Nb_Ordi);
                        AffichageAllumette(NbAllumette);
                        }
                        else if ((NbAllumette - 2) % 4 == 0){
                            Nb_Ordi = 2;
                            NbAllumette = NbAllumette - Nb_Ordi;
                            ChoixOrdi(Nb_Ordi);
                            AffichageAllumette(NbAllumette);
                        }
                        else if ((NbAllumette - 3) % 4 == 0){
                            Nb_Ordi = 3;
                            NbAllumette = NbAllumette - Nb_Ordi;
                            ChoixOrdi(Nb_Ordi);
                            AffichageAllumette(NbAllumette);
                        }
                        else{
                            NbAllumette = NbAllumette - (1+rand()%3);
                        }
                        if (NbAllumette == 0){
                            printf("Felicitation, Vous remportez cette partie\n");
                        }
                    }
                    compteur = compteur + 1;
                }
                
            }
            else if ( WhoStart == 2) {
                if((NbAllumette - 1) % 4 == 0) {
                    Nb_Ordi = 1;
                    NbAllumette = NbAllumette - Nb_Ordi;
                    AffichageAllumette(NbAllumette);
                }
                else if ((NbAllumette - 2) % 4 == 0) {
                    Nb_Ordi = 2;
                    NbAllumette = NbAllumette - Nb_Ordi;
                    AffichageAllumette(NbAllumette);
                }
                else if ((NbAllumette - 3) % 4 == 0){
                    Nb_Ordi = 3;
                    NbAllumette = NbAllumette - Nb_Ordi;
                    AffichageAllumette(NbAllumette);
                }
                else{
                                NbAllumette = NbAllumette - (1+rand()%3);
                }
            }
        } while( NbAllumette > 0);

    }
}
