// Fichier du Main de l'application
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
#include "Fonction.c"

void main(){

    Welcome();
    int WhoStart = QuiCommence();
    int NbAllumette;
    int ModeDeJeu;
    int Nb_User1;
    int Nb_User2;
    int Nb_Ordi;
    int compteur;
    int lvlDifficulte;
    char pseudoj1 [40] = {0};
    char pseudoj2 [40] = {0};
    int etat = 0;
    int Relance;

    while (etat != 1){
        
        printf("\nIl existe 2 modes de jeu : \n[1] - Mode Contre l'ordinateur \n[2] - Mode Multijoueur \n\nTapez le numero du mode auquel vous voulez jouer : \n");
        scanf("%d",&ModeDeJeu);
        NbAllumette = 30;
        // Choix du mode jeu Contre l'ordinateur
        if(ModeDeJeu == 1){
            printf("\nIl existe 2 niveau de difficulte : \n [1] - Mode Facile \n [2] - Mode Hardcore \nTapez le numero du mode auquel vous voulez jouer : \n");
            scanf("%d",&lvlDifficulte);
            // Lancement d'une partie en mode Hardcore
            if(lvlDifficulte == 2){         
                do {
                    // Le joueur commence 
                    if(WhoStart == 1) {
                        compteur = 1;
                        while(NbAllumette >0){
                            
                            affichageTour(compteur);
                            printf("\nC'est a votre tour de jouer !  \nVous devez choisir un nombre d'allumettes entre 1 et 3.\n");
                            scanf("%d",& Nb_User1 );

                            while (Nb_User1 < 1 || Nb_User1 > 3){
                                printf("Attention a la triche ! Vous devez tirer entre 1 et 3 allumettes!\n");
                                scanf("%d",&Nb_User1);
                            }
                            NbAllumette = (NbAllumette - Nb_User1);
                            AffichageAllumette(NbAllumette);
                            // Si le joueur pioche la dernière allumette : il perds
                            if(NbAllumette <= 0){
                                printf("Dommage, l'ordinateur remporte la partie\n");
                            }
                            else{
                                
                                if((NbAllumette ) % 4 == 0){
                                Nb_Ordi = 3;
                                NbAllumette = NbAllumette - Nb_Ordi;
                                ChoixOrdi(Nb_Ordi);
                                AffichageAllumette(NbAllumette);
                                }
                                else if ((NbAllumette + 1) % 4 == 0){
                                    Nb_Ordi = 2;
                                    NbAllumette = NbAllumette - Nb_Ordi;
                                    ChoixOrdi(Nb_Ordi);
                                    AffichageAllumette(NbAllumette);
                                    
                                }
                                else if ((NbAllumette + 2) % 4 == 0){
                                    Nb_Ordi = 1;
                                    NbAllumette = NbAllumette - Nb_Ordi;
                                    ChoixOrdi(Nb_Ordi);
                                    AffichageAllumette(NbAllumette);
                                }
                                else{
                                    srand(time(NULL));
                                    int Nb_Ordi=rand()%3+1;
                                    ChoixOrdi(Nb_Ordi);
                                    NbAllumette = NbAllumette - Nb_Ordi;
                                    AffichageAllumette(NbAllumette);
                                    
                                }
                                if (NbAllumette <= 0){
                                    printf("Felicitation, Vous remportez cette partie\n");
                                }
                            }
                            compteur = compteur + 1;
                        }
                        
                    }
                    else if ( WhoStart == 2) {
                        
                        compteur = 1;
                        while(NbAllumette >0){
                            // L'ordinateur joue
                            affichageTour(compteur);
                                if((NbAllumette ) % 4 == 0){
                                Nb_Ordi = 3;
                                NbAllumette = NbAllumette - Nb_Ordi;
                                ChoixOrdi(Nb_Ordi);
                                AffichageAllumette(NbAllumette);
                                }
                                else if ((NbAllumette + 1) % 4 == 0){
                                    Nb_Ordi = 2;
                                    NbAllumette = NbAllumette - Nb_Ordi;
                                    ChoixOrdi(Nb_Ordi);
                                    AffichageAllumette(NbAllumette);
                                    
                                }
                                else if ((NbAllumette + 2) % 4 == 0){
                                    Nb_Ordi = 1;
                                    NbAllumette = NbAllumette - Nb_Ordi;
                                    ChoixOrdi(Nb_Ordi);
                                    AffichageAllumette(NbAllumette);
                                }
                                else{
                                    srand(time(NULL));
                                    int Nb_Ordi=rand()%3+1;
                                    ChoixOrdi(Nb_Ordi);
                                    NbAllumette = NbAllumette - Nb_Ordi;
                                    AffichageAllumette(NbAllumette);
                                    
                                }
                                if (NbAllumette <= 0){
                                    printf("Felicitation, Vous remportez cette partie\n");
                                }
                
                            else{
                                
                                printf("\nC'est a votre tour de jouer !  \nVous devez choisir un nombre d'allumettes entre 1 et 3.\n");
                                scanf("%d",& Nb_User1 );

                                while (Nb_User1 < 1 || Nb_User1 > 3){
                                    printf("Attention a la triche ! Vous devez tirer entre 1 et 3 allumettes!\n");
                                    scanf("%d",&Nb_User1);
                                }
                                NbAllumette = (NbAllumette - Nb_User1);
                                AffichageAllumette(NbAllumette);
                                // Si le joueur pioche la dernière allumette : il perds
                                if(NbAllumette <= 0){
                                    printf("Dommage, l'ordinateur remporte la partie\n");
                                }    
                                    
                            }
                            compteur = compteur + 1;
                        }

                    }
                } while( NbAllumette > 0);
            }
            // Lancement d'une partie en mode facile
            if(lvlDifficulte == 1){
                do {
                    // Le joueur commence 
                    if(WhoStart == 1) {
                        compteur = 1;
                        while(NbAllumette >0){
                            
                            affichageTour(compteur);
                            printf("\nC'est a votre tour de jouer !  \nVous devez choisir un nombre d'allumettes entre 1 et 3 : ");
                            scanf("%d",& Nb_User1 );

                            while (Nb_User1 < 1 || Nb_User1 > 3){
                                viderBuffer();
                                printf("Attention a la triche ! Vous devez tirer entre 1 et 3 allumettes!\nTapez a nouveau votre choix: ");
                                scanf("%d",&Nb_User1);
                            }
                            NbAllumette = (NbAllumette - Nb_User1);
                            AffichageAllumette(NbAllumette);
                            // Si le joueur pioche la dernière allumette : il perds
                            if(NbAllumette <= 0){
                                printf("Dommage, l'ordinateur remporte la partie\n");
                            }
                            else{
                                
                                if((NbAllumette )  > 0){
                                    srand(time(NULL));
                                    int Nb_Ordi=rand()%3+1;
                                    ChoixOrdi(Nb_Ordi);
                                    NbAllumette = NbAllumette - Nb_Ordi;
                                    AffichageAllumette(NbAllumette);
                                }
                                if (NbAllumette <= 0){
                                    printf("Felicitation, Vous remportez cette partie\n");
                                }
                            }
                            compteur = compteur + 1;
                        }
                        
                    }
                    else if ( WhoStart == 2) {
                        
                        compteur = 1;
                        while(NbAllumette >0){
                            // L'ordinateur joue
                            affichageTour(compteur);
                                if((NbAllumette) >0){
                                    srand(time(NULL));
                                    int Nb_Ordi=rand()%3+1;
                                    ChoixOrdi(Nb_Ordi);
                                    NbAllumette = NbAllumette - Nb_Ordi;
                                    AffichageAllumette(NbAllumette);
                                }
                                
                                if (NbAllumette <= 0){
                                    printf("Felicitation, Vous remportez cette partie\n");
                                }
                
                            else{
                                
                                printf("\nC'est a votre tour de jouer !  \nVous devez choisir un nombre d'allumettes entre 1 et 3 : ");
                                scanf("%d",& Nb_User1 );

                                while (Nb_User1 < 1 || Nb_User1 > 3){
                                    viderBuffer();
                                    printf("Attention a la triche ! Vous devez tirer entre 1 et 3 allumettes!\nTapez a nouveau votre choix: ");
                                    scanf("%d",&Nb_User1);
                                }
                                NbAllumette = (NbAllumette - Nb_User1);
                                AffichageAllumette(NbAllumette);
                                // Si le joueur pioche la dernière allumette : il perds
                                if(NbAllumette <= 0){
                                    printf("Dommage, l'ordinateur remporte la partie\n");
                                }    
                                    
                            }
                            compteur = compteur + 1;
                        }

                    }
                } while( NbAllumette > 0);

            }
            // Si mode multi
        } else if (ModeDeJeu == 2){
            printf("\nEntrez le nom du joueur numero 1?\n");
            scanf("%s", &pseudoj1);
            printf("\nEntrez le nom du joueur numero 2?\n");
            scanf("%s", &pseudoj2);
            
            
            // Le joueur commence 
                    if(WhoStart == 1) {
                        compteur = 1;
                        while(NbAllumette >0){
                            
                            affichageTour(compteur);
                            printf("\nC'est a %s de jouer !  \nVous devez choisir un nombre d'allumettes entre 1 et 3.\n",pseudoj1);
                            scanf("%d",& Nb_User1 );

                            while (Nb_User1 < 1 || Nb_User1 > 3){
                                viderBuffer();
                                printf("Attention a la triche ! Vous devez tirer entre 1 et 3 allumettes!\n");
                                scanf("%d",&Nb_User1);
                            }
                            NbAllumette = (NbAllumette - Nb_User1);
                            AffichageAllumette(NbAllumette);
                            // Si le joueur pioche la dernière allumette : il perds
                            if(NbAllumette <= 0){
                                printf("Felicitation, %s remporte la partie\n",pseudoj2);
                            }
                            else{
                                // au tour du j2 de jouer 
                                printf("\nC'est a %s de jouer !  \nVous devez choisir un nombre d'allumettes entre 1 et 3.\n",pseudoj2);
                                scanf("%d",& Nb_User1 );
                                while (Nb_User1 < 1 || Nb_User1 > 3){
                                    viderBuffer();
                                    printf("Attention a la triche ! Vous devez tirer entre 1 et 3 allumettes!\n");
                                    scanf("%d",&Nb_User1);
                                }
                                NbAllumette = (NbAllumette - Nb_User1);
                                AffichageAllumette(NbAllumette);
                                // Si le joueur pioche la dernisère allumette : il perds
                                if (NbAllumette <= 0){
                                    printf("Felicitation, %s remporte la partie\n",pseudoj1);
                                }
                            }
                            compteur = compteur + 1;
                        }
                        
                    }
                    else if ( WhoStart == 2) {
                        
                        compteur = 1;
                        while(NbAllumette >0){
                            
                            affichageTour(compteur);
                            printf("\nC'est a %s de jouer !  \nVous devez choisir un nombre d'allumettes entre 1 et 3.\n",pseudoj2);
                            scanf("%d",& Nb_User1 );

                            while (Nb_User1 < 1 || Nb_User1 > 3){
                                viderBuffer();
                                printf("Attention a la triche ! Vous devez tirer entre 1 et 3 allumettes!\n");
                                scanf("%d",&Nb_User1);
                            }
                            NbAllumette = (NbAllumette - Nb_User1);
                            AffichageAllumette(NbAllumette);
                            // Si le joueur pioche la dernière allumette : il perds
                            if(NbAllumette <= 0){
                                printf("Felicitation, %s remporte la partie\n",pseudoj1);
                            }
                            else{
                                // au tour du j2 de jouer 
                                printf("\nC'est a %s de jouer !  \nVous devez choisir un nombre d'allumettes entre 1 et 3.\n",pseudoj1);
                                scanf("%d",& Nb_User1 );
                                while (Nb_User1 < 1 || Nb_User1 > 3){
                                    viderBuffer();
                                    printf("Attention a la triche ! Vous devez tirer entre 1 et 3 allumettes!\n");
                                    scanf("%d",&Nb_User1);
                                }
                                NbAllumette = (NbAllumette - Nb_User1);
                                AffichageAllumette(NbAllumette);
                                // Si le joueur pioche la dernière allumette : il perds
                                if (NbAllumette <= 0){
                                    printf("Felicitation, %s remporte la partie\n",pseudoj2);
                                }
                            }
                            compteur = compteur + 1;
                        }

                    }
        }
        printf("\n Voulez vous revenir a l'ecran du mode de jeu (tapez 1 pour oui / tapez 2 pour non)");
        scanf("%d", & Relance);
        

        while (Relance != 1 && Relance != 2){
            viderBuffer();
            printf("\n Votre reponse n'est pas pris en compte, voici les choix possible: (tapez un pour oui / tapez 2 pour non)");
            scanf("%d", & Relance);
        }
        
        if (Relance ==1){
            printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        }if (Relance == 2){
            etat = 1;
        }
    }
    
}

