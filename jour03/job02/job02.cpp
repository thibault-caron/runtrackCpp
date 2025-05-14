#include <iostream>
#include <string>
#include <algorithm> // Pour std::remove_if

bool isVowel(char c) {
    // Convertir en minuscule pour simplifier la vérification
    c = std::tolower(c);
    // Vérifier si c'est une voyelle
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
    // Chaîne de caractères originale
    std::string texte = "vive la plateforme !";
    
    // Afficher la chaîne originale
    std::cout << "Chaîne originale : " << texte << std::endl;
    
    // Supprimer toutes les voyelles
    texte.erase(std::remove_if(texte.begin(), texte.end(), isVowel), texte.end());
    
    // Afficher la chaîne sans voyelles
    std::cout << "Chaîne sans voyelles : " << texte << std::endl;
    
    return 0;
}
