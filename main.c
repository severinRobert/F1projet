#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "random.h"
#include "cars.h"



int num_voiture [20] = {44, 77, 16, 5, 33, 23, 55, 4, 3, 31, 10, 26, 11, 18, 7, 99, 20, 8, 63, 6};// les numéros de voitures dans la course


// creation de processus fils par voiture

int main(int argc, char *argv[]) {
    int i = 0;// j'initiale une compteur
    pid_t process_id;// l'identification de processus
    for ( int i; i < 20; i++) {
        process_id = fork();
        if (process_id == 0){
            // si le fork == 0, cela veut dire que le fils a bien été crée
            break;
        }
        if (process_id == -1){
            // si le fork est négatif cela signifie qu'il y a une erreur,le fils n'a pas été crée
            write(1,"erreur dans la fork",sizeof("erreur dans la fork"));
        }

    }



}
