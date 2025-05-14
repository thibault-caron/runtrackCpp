#include <iostream>
#include <string>

// Classe Aquatique avec capacité de nage
class Aquatique {
private:
    double vitesseNage; // vitesse en m/s

public:
    // Constructeur
    Aquatique(double vitesse = 0.0) : vitesseNage(vitesse) {}

    // Méthode virtuelle pour nager
    virtual void nage() const {
        std::cout << "Cet animal nage à " << vitesseNage << " m/s" << std::endl;
    }

    // Getter et setter pour la vitesse de nage
    double getVitesseNage() const { return vitesseNage; }
    void setVitesseNage(double vitesse) { vitesseNage = vitesse; }
};

// Classe Terrestre avec capacité de marche
class Terrestre {
private:
    double vitesseMarche; // vitesse en m/s

public:
    // Constructeur
    Terrestre(double vitesse = 0.0) : vitesseMarche(vitesse) {}

    // Méthode virtuelle pour marcher
    virtual void marche() const {
        std::cout << "Cet animal marche à " << vitesseMarche << " m/s" << std::endl;
    }

    // Getter et setter pour la vitesse de marche
    double getVitesseMarche() const { return vitesseMarche; }
    void setVitesseMarche(double vitesse) { vitesseMarche = vitesse; }
};

// Classe Pingouin qui hérite d'Aquatique et Terrestre
class Pingouin : public Aquatique, public Terrestre {
private:
    std::string nom;

public:
    // Constructeur
    Pingouin(const std::string& nom = "Pingouin", double vitesseNage = 7.5, double vitesseMarche = 0.5)
        : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom(nom) {}

    // Surcharge des méthodes virtuelles
    void nage() const override {
        std::cout << nom << " nage à " << getVitesseNage() << " m/s" << std::endl;
    }

    void marche() const override {
        std::cout << nom << " marche à " << getVitesseMarche() << " m/s" << std::endl;
    }

    // Méthode pour se présenter
    void sePresenter() const {
        std::cout << "Bonjour, je suis " << nom << ", un pingouin qui peut nager et marcher !" << std::endl;
    }

    // Getter et setter pour le nom
    std::string getNom() const { return nom; }
    void setNom(const std::string& nouveauNom) { nom = nouveauNom; }
};

int main() {
    // Création d'un pingouin
    Pingouin kovalski("Kovalski", 8.0, 2.0);
    
    // Tests des méthodes
    kovalski.sePresenter();
    kovalski.nage();
    kovalski.marche();

    // Test polymorphisme
    Aquatique* animalAquatique = &kovalski;
    Terrestre* animalTerrestre = &kovalski;

    std::cout << "\nVia pointeur Aquatique:" << std::endl;
    animalAquatique->nage();

    std::cout << "\nVia pointeur Terrestre:" << std::endl;
    animalTerrestre->marche();

    return 0;
}
