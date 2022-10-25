// Fichier contenant les divers fonctions utilisé dans notre code
#include <stdio.h>


int AffichageAllumette(int nombre){
    
    for (int x=0; x<nombre; x++){
        printf(" |");
    }

    printf("      Il reste %d allumettes \n",nombre);
}

void main(){
    AffichageAllumette(6);
}
