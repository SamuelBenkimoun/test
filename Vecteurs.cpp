#include "Vecteurs.h"
#include <iostream>

Vecteurs::Vecteurs(int n)
{
  tableau = new float [n];
  taille = n;
}

Vecteurs::~Vecteurs()
{
//dtor
  delete [] tableau;
}

void Vecteurs::set_tableau(int i,float valeur)
{
tableau [i] = valeur;
}

float Vecteurs::get_tableau(int i)
{
return tableau [i];
}

/*void Vecteurs::afficher()
{
    for (int i=0; i<taille; i++)
    {
        cout << get_tableau(i);
    }
}*/
