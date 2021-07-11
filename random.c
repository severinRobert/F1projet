//
// Created by ephec on 2/11/20.
//

#include <random.h>

#define SEC_MIN_SECTEUR 25
#define SEC_MAX_SECTEUR 45
#define SEC_MAX_PIT 6
#define SEC_MIN_PIT 3

/*
 * fonction qui renvoie un temps de secteur compris entre SEC_MIN_SECTEUR et SEC_MAX_SECTEUR avec des millièmes
 * on prend d'abord un entier puis on génère un nombre entre 0 et 999 qu'on divise par 1000 pour avoir les millisecondes
 * le temps est égale à l'entier + les millisecondes
*/
double tpsSecteur(void)
{
    static int first = 0;

    if (first == 0)
    {
        srand (time (NULL));
        first = 1;
    }
    int diffMinMax = SEC_MAX_SECTEUR - SEC_MIN_SECTEUR;
    int sec = (rand() % diffMinMax) + SEC_MIN_SECTEUR;
    double ms = (rand()%999) * 0.001;
    double temps = sec + ms;
    return (temps);
}

/*
 * fonction qui renvoie un temps de pit
 * on prend d'abord un entier puis on génère un nombre entre 0 et 999 qu'on divise par 1000 pour avoir la virgule
 * le temps est égale à l'entier + la virgule
*/

double tpsPits(void)
{
    static int first = 0;

    if (first == 0)
    {
        srand (time (NULL));
        first = 1;
    }
    int diffMinMax = SEC_MAX_PIT - SEC_MIN_PIT;
    int sec = (rand() % diffMinMax) + SEC_MIN_PIT;
    double ms = (rand()%999) * 0.001;
    double temps = sec + ms;
    return (temps);

}


