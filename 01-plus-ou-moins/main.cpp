#include <iostream>

int comparer(int proposition1, int resultat){
    return proposition1==resultat;
}

int tirer_nombre(int min, int max){
    return rand() % (max - min + 1) + min;
}

int main() {
    std::cout << "Bienvenue dans le jeu du plus ou moins !" << std::endl;
    int min = 1;
    int max = 100;
    std::cout << "Le nombre est entre " << min << " et " << max << "." << std::endl;
    int nombre_a_deviner = tirer_nombre(min, max);
    int success = 0;

    while (success != 1) {
        
        std::cout << "ton essai : ";
        int essai;
        std::cin >> essai;
        if (essai < nombre_a_deviner) {
            std::cout << "C'est plus !" << std::endl;
        } else if (essai > nombre_a_deviner) {
            std::cout << "C'est moins !" << std::endl;
        } else {
            std::cout << "Bravo ! Vous avez trouvé le nombre." << std::endl;
        }
        success = comparer(essai, nombre_a_deviner);
    }
    return 0;
}