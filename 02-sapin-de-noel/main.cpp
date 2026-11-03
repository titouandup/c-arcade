#include <iostream>

int tirer_nombre(int min, int max){
    return rand() % (max - min + 1) + min;
}

void tracage(int hauteur){
    int etoile = tirer_nombre(3, 10);
    for(int i=0; i<hauteur; i++){
        for(int j=0; j<hauteur-i-1; j++){
            std::cout << " ";
        }
        for(int k=0; k<2*i+1; k++){
            if(etoile == 0){
                std::cout << "°";
                etoile = tirer_nombre(3,10);
            } else if (i == 0) {
                std::cout << "^";
                etoile--;
            } else {
                std::cout << "*";
                etoile--;
            }
        }
        std::cout << std::endl;
    }
}

int hauteur(){
    std::cout << "Entrez la hauteur du sapin : ";
    int h;
    std::cin>> h;
    return h;
}

int main() {
    tracage(hauteur());
    return 0;
}