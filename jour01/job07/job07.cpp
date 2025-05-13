#include <iostream>

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int nombre;
    
    // Demande à l'utilisateur de saisir un nombre entier
    std::cout << "Veuillez saisir un nombre entier : ";
    std::cin >> nombre;
    
    // Vérifie si le nombre est pair ou impair
    if (isEven(nombre)) {
        std::cout << "Le nombre " << nombre << " est pair." << std::endl;
    } else {
        std::cout << "Le nombre " << nombre << " est impair." << std::endl;
    }
    
    return 0;
}
