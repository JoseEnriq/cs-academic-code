#include <iostream>
#include <cmath>

using namespace std;

class Saiyajin
{
private:
    double p_luta;

public:
    Saiyajin()
    {
        p_luta = 0.0;
    }

    Saiyajin(double k, double n) // poder de luta de um saiyajin
    {
        p_luta = 2 * n * pow(k, n);
    }
    void imprimir() 
    {
        cout << "Poder de luta: " << p_luta << endl;
    }

    friend Saiyajin operator + (Saiyajin X, Saiyajin Y) // Metamoru
    {
        Saiyajin fus;

        if (Y.p_luta > X.p_luta) // caso o poder de Y for maior que o de X, o Y precisa se igualar ao poder de X
        {
            Y.p_luta = X.p_luta;     
        }

        else
        {
            X.p_luta = Y.p_luta; //caso o poder de X for maior que o Y
        }

        fus.p_luta = X.p_luta + Y.p_luta; 

        return fus;
    }

    friend Saiyajin operator * (Saiyajin X, Saiyajin Y) // Potara
    {
        Saiyajin fus;

        fus.p_luta = (X.p_luta + Y.p_luta) * 12;

        return fus;
    }
};


int main()
{
    Saiyajin X(25.0, 2.0);
    Saiyajin Y(30.0, 2.0);
    Saiyajin res;

    cout << "Fusao Metamoro" << endl;

    res=X + Y;
    
    res.imprimir();

    cout << "Fusao Potara" << endl;

    res = X * Y;
    res.imprimir();


}
