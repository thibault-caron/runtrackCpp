#include <iostream>
#include <string>
#include <algorithm> // Pour std::transform

int main() {
    // Chaîne de caractères à transformer
    std::string texte = "vive la plateforme !";
    
    // Afficher la chaîne originale
    std::cout << "Chaîne originale : " << texte << std::endl;
    
    // Transformer la chaîne en majuscules - https://www.geeksforgeeks.org/transform-c-stl-perform-operation-elements/
    std::transform(texte.begin(), texte.end(), texte.begin(),
                   [](unsigned char c) { return std::toupper(c); });
    
    // Afficher la chaîne transformée
    std::cout << "Chaîne transformée : " << texte << std::endl;
    
    return 0;
}
