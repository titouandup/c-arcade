#include <iostream>

void tracage(int hauteur){
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