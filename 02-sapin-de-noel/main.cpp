#include <iostream>

void tracage(int hauteur){
    for(int i=0; i<hauteur; i++){
        for(int j=0; j<hauteur-i-1; j++){
            std::cout << " ";
        }
        for(int k=0; k<2*i+1; k++){
            std::cout << "*";
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