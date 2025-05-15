#include <iostream>

int main() {
    int number = 2019;
    int *ptr_number = &number;
    
    // Affichage de la valeur de "number" via le pointeur
    std::cout << "*ptr_number - Valeur de number via le pointeur (dereference): " << *ptr_number << std::endl;
    
    // Pour démontrer que le pointeur pointe bien vers la variable "number"
    std::cout << "number - Valeur directe de number: " << number << std::endl;
    std::cout << "&number - Adresse de number: " << &number << std::endl;
    std::cout << "ptr_number - Valeur stockee dans le pointeur (adresse, reference): " << ptr_number << std::endl;
    
    return 0;
}
