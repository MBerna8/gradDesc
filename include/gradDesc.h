#ifndef GRADDESC_H
#define GRADDESC_H
#include "../include/Function.h"

/*Classe che implementa l'algoritmo di discesa del gradiente. Conserva i due parametri del criterio di terminazione:
il numero massimo di iterazioni N e la soglia T sulla norma del gradiente
*/
class gradDesc{
    int N;
    double T;

    public: 

    //Costrutore per inizializzare le variabili globali 
    gradDesc(int itr, double sgl);

    /*Esegue l'algoritmo sulla funzione f, partendo dal punto (x,y) e usando il passo indicato. Ad ogni iterazione 
    calcola lo spostamento verso il passo successivo. Al termine (x,y) contengono la posizione finale del punto.
    Stampa a schermo i dati ogni 10 iterazioni e all'ultima iterazione
    */
    void run(double &x, double &y, const Function& f, double passo); 

    //Controllo del gradiente: restituisce true se si deve continuare, cioe' se i < N e la norma del gradiente e' >= T
    bool checkGrad(const Function& f, std::array<double,2> grad, int i) const;
};

#endif //GRADDESC_H
