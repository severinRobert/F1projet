//
// Created by ephec on 12/11/20.
//


#ifndef PROJETF1OS_CARS_H
#define PROJETF1OS_CARS_H

 //PROJETF1OS_CARS_H

// typedef struct me permet de crée un type pour mes demmande ici pour une session
typedef struct Session{

    char fileName[10];// pour chercher et envoyer les données de chaque session dans des fichiers externe
    double tempsSession;
    int nombreCar;

};

// ce struct car va me permettre de definir chaque temps,tours a chaque voiture
typedef struct Car {
    int idCar;
    double s1;
    double s2;
    double s3;
    double tempsTour;
    int lap;
    // meilleur temps
    double topS1;
    double topS2;
    double topS3;
    double topLap;
    double top_temps_totale;
    //arret,accident
    int out;
    int tempsvie;

};

#endif


