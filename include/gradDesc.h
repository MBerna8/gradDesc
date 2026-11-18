#ifndef GRADDSEC_H
#define GRADDSEC_H
#include "../include/Function.h"

class gradDesc{

    protected:
    int N;
    double T;

    public: 

    //Costrutore per inizializzare le variabili globali 
    gradDesc(int itr, double sgl);

    //Calcolo dello spostamento verso il passo successivo                         //Controlla se il gradiente è = 0 o inferiore della soglia T
    void iterazione(double &x, double &y, Function& f, double passo); 

    //Controllo del gradiente
    bool checkGrad(Function& f, std::array<double,2> grad, int i);
};

#endif //GRADDESC_H