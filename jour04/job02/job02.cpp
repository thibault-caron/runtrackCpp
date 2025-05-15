#include <iostream>

// Fonction pour échanger les valeurs de deux variables en utilisant des pointeurs
void echangerValeurs(int* ptr1, int* ptr2) {
    int temp = *ptr1;  // Stocke temporairement la valeur pointée par ptr1
    *ptr1 = *ptr2;     // Assigne la valeur pointée par ptr2 à l'adresse pointée par ptr1
    *ptr2 = temp;      // Assigne la valeur temporaire à l'adresse pointée par ptr2
}

int main() {
    // Création des deux variables contenant des entiers
    int a = 42;
    int b = 73;
    
    // Affichage des valeurs avant l'échange
    std::cout << "Avant l'échange:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    
    // Intervertir les valeurs en utilisant des pointeurs
    echangerValeurs(&a, &b);
    
    // Affichage des valeurs après l'échange
    std::cout << "\nAprès l'échange:" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    
    return 0;
}
