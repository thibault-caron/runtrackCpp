#include <iostream>
#include <limits>

bool isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int nombre;
    bool continuer = true;

    while (continuer) {
        std::cout << "Veuillez saisir un nombre entier (ou -1 pour quitter) : ";
        if (std::cin >> nombre) {
            if (nombre == -1) {
                continuer = false;
            } else {
                if (isEven(nombre)) {
                    std::cout << "Le nombre " << nombre << " est pair." << std::endl;
                } else {
                    std::cout << "Le nombre " << nombre << " est impair." << std::endl;
                }
            }
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrée invalide. Veuillez entrer un nombre entier." << std::endl;
        }
    }
    
    return 0;
}
