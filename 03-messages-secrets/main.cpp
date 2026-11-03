#include <iostream>
#include <cstring>

char decaler_lettre(char c, int k){
    
    return 0;
}

void chiffrer(char message[], int k){
    std::cout << "Message chiffré : ";
    for(int i=0; message[i] != '\0'; i++){
        message[i] = decaler_lettre(message[i], k);
        std::cout << message[i];
    }
    std::cout << std::endl;
}

void dechiffrer(char message[], int k){
}

int main() {
    std::cout << "Message : ";
    char message[100];
    std::cin.getline(message, 100);
    std::cout << "Clé : ";
    int k;
    std::cin >> k;
    chiffrer(message, k);
    return 0;
}