#include <iostream>
#include <limits> // Ajout de l'en-tête pour std::numeric_limits

float biggestNumber(float a, float b, float c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    float a, b, c;
    bool continuer = true;

    while (continuer) {
        std::cout << "Veuillez entrer trois nombres: ";
        std::cin >> a >> b >> c;

        if (std::cin.fail()) {
            std::cin.clear(); // Réinitialiser l'état d'erreur
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorer l'entrée invalide
            std::cout << "Entrée invalide. Veuillez entrer trois nombres." << std::endl;
        } else {
            float max = biggestNumber(a, b, c);
            std::cout << "Le plus grand nombre est: " << max << std::endl;
            std::cout << "Voulez-vous continuer? (1 pour oui, 0 pour non): ";
            int choix;
            std::cin >> choix;
            while (std::cin.fail() || (choix != 0 && choix != 1)) {
                std::cin.clear(); // Réinitialiser l'état d'erreur
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorer l'entrée invalide
                std::cout << "Entrée invalide. Veuillez entrer 1 ou 0." << std::endl;
                std::cout << "Voulez-vous continuer? (1 pour oui, 0 pour non): ";
                std::cin >> choix;
            }
            if (choix == 0) {
                continuer = false; // Sortir de la boucle
            }
        }
    }
    return 0;
}
