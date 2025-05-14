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

// Classe Pingouin qui hérite d'Aquatique et Terrestre, avec nouvelle fonctionnalité de glisse
class Pingouin : public Aquatique, public Terrestre {
private:
    std::string nom;
    double vitesseGlisse; // Nouvelle vitesse de glisse en m/s

public:
    // Constructeur
    Pingouin(const std::string& nom = "Pingouin", double vitesseNage = 7.5, 
             double vitesseMarche = 0.5, double vitesseGlisse = 12.0)
        : Aquatique(vitesseNage), Terrestre(vitesseMarche), 
          nom(nom), vitesseGlisse(vitesseGlisse) {}
    
    // Constructeur de copie
    Pingouin(const Pingouin& autre) 
        : Aquatique(autre.getVitesseNage()), 
          Terrestre(autre.getVitesseMarche()), 
          nom(autre.nom + " (copie)"), 
          vitesseGlisse(autre.vitesseGlisse) {
        std::cout << "Constructeur de copie appelé pour créer " << nom << std::endl;
    }

    // Surcharge des méthodes virtuelles
    void nage() const override {
        std::cout << nom << " nage à " << getVitesseNage() << " m/s" << std::endl;
    }

    void marche() const override {
        std::cout << nom << " marche à " << getVitesseMarche() << " m/s" << std::endl;
    }
    
    // Nouvelle méthode pour la glisse
    void glisse() const {
        std::cout << nom << " glisse sur son ventre à " << vitesseGlisse << " m/s" << std::endl;
    }

    // Méthode pour se présenter
    void sePresenter() const {
        std::cout << "Bonjour, je suis " << nom << ", un pingouin qui peut nager, marcher et glisser !" << std::endl;
    }

    // Getter et setter pour le nom
    std::string getNom() const { return nom; }
    void setNom(const std::string& nouveauNom) { nom = nouveauNom; }
    
    // Getter et setter pour la vitesse de glisse
    double getVitesseGlisse() const { return vitesseGlisse; }
    void setVitesseGlisse(double vitesse) { vitesseGlisse = vitesse; }
};

int main() {
    // Création d'un pingouin
    Pingouin kovalski("Kovalski", 8.0, 2.0, 15.0);
    
    // Tests des méthodes
    kovalski.sePresenter();
    kovalski.nage();
    kovalski.marche();
    kovalski.glisse();
    
    // Test du constructeur de copie
    Pingouin rico = kovalski;  // Appel du constructeur de copie
    
    std::cout << "\nInformations du pingouin copié:" << std::endl;
    rico.sePresenter();
    rico.nage();
    rico.marche();
    rico.glisse();
    
    // Modification des vitesses du pingouin copié
    rico.setVitesseNage(10.0);
    rico.setVitesseMarche(3.0);
    rico.setVitesseGlisse(18.0);
    
    std::cout << "\nAprès modification des vitesses:" << std::endl;
    rico.nage();
    rico.marche();
    rico.glisse();

    return 0;
}
