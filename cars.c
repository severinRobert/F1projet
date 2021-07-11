//
// Created by ephec on 12/11/20.
//
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "random.h"
#include "cars.h"

int tempsTour = 0;
int laps = 0;
Car *voiture;
Session session;

/**
 *
 * La probabilité que la voiture est un crash
 * @param si le nombre = 1 la voiture est crash
 */


void probabiliterCrash(int proba){
    if (rand() %500 ==1){
        car -> out =1;
        exit(0)
    }

}


/**
 * La probabilitée qu'une voiture aille au stand
 * la resistance d'un pneu (5000-6000) - une nombre random entre 0 et 250 pour chaque tour
 * si le pneu = 0 ,pneu a changer
 *
 * @param proba
 * @return
 */


int probabiliterStand(int proba){
    car -> tempsvie = car -> tempsvie - (200 + rand() %50);//je pointe vers mon temps de vie de car et je génère un temps entre 200 et 250
    if (car -> tempsvie <=0){// si mon temps de vie est supérieur ou égale a 0
        car -> tempsvie = 5000 + rand() %1000;// je regarde si mon pneu va lacher ou non
        car -> s3 += 15 + rand() % 5;// par rapport au temps dans un stand

    }


}
