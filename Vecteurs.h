#ifndef VECTEURS_H
#define VECTEURS_H


class Vecteurs
{
    public:
        Vecteurs(int n);
        virtual ~Vecteurs();
        void set_tableau (int i, float valeur);
        float get_tableau (int i);
       void afficher ();

    protected:


    private:
    int taille;
    float * tableau;
};

#endif // VECTEURS_H
