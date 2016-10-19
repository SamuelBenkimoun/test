#include <iostream>
#include "Vecteurs.h"

using namespace std;

int main()
{
int n;

    cout << "Définir taille du vecteur" << endl;
    cin >> n;
    Vecteurs tableau1(n);

int i;
float valeur;

    cout << "Définir une position dans le vecteur et y affecter une valeur" << endl;
    cin >> i;
    cin >> valeur;
    tableau1.set_tableau(i,valeur);

    /*cout << "Affichage" << endl;
    tableau1.afficher();*/

    cout << "Vérifier une valeur du vecteur" << endl;
    cin >> i;
    cout << "La valeur en position "<< i << " est de " << tableau1.get_tableau(i) << endl;

    return 0;

}
