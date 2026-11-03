#include <iostream>

char decaler_lettre(char c, int k){
    if (c+k > 'z'){
        return c+k-26;
    }
    return c+k; 
}

void chiffrer(char message[], int k){
    std::cout << "Message chiffré : ";
    for(int i=0; message[i] != '\0'; i++){
        message[i] = decaler_lettre(message[i], k);
        std::cout << message[i];
    }
    std::cout << std::endl;
    dechiffrer(message, k);
}

void dechiffrer(char message[], int k){
    std::cout << "Message déchiffré : ";
    for(int i=0; message[i] != '\0'; i++){
        message[i] = decaler_lettre(message[i], -k);
        std::cout << message[i];
    }
    std::cout << std::endl;
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