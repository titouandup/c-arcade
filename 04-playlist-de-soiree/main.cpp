#include <iostream>

typedef struct {
int minutes;
int secondes;
} Duree;

typedef struct {
char titre[40];
char artiste[30];
Duree duree;
int note; /* de 1 à 5 */
} Morceau;

int en_secondes(Duree d) {
    return d.minutes * 60 + d.secondes;
}

Duree depuis_secondes(int s)

Duree duree_totale(Morceau p[], int n)

void trier_par_note(Morceau p[], int n)

Morceau *plus_long(Morceau p[], int n)

int main() {

    return 0;
}