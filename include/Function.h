#ifndef FUNCTION_H
#define FUNCTION_H
#include <array>
#include <cmath>

/*Classe base astratta che rappresenta una funzione matematica f(x,y) da R^2 a R.
Ogni funzione concreta (Function1 ... Function8) deriva da questa classe e ridefinisce il calcolo del valore
e del gradiente. In questo modo l'algoritmo di discesa del gradiente puo' lavorare su qualsiasi funzione
senza conoscerne la forma esatta
*/
class Function{
    public:  
    /*value(double x, double y) restituisce il valore della funzione calcolato in un punto (x,y), le cui coordinate sono 
    passate come parametri. La funzione viene sovrascritta per ciascuna classe, che ne specifica la rispettiva funzione
    */
    virtual double value(double x, double y) const = 0;

    /*grad(double x, double y) restituisce il valore del gradiente in un determinato punto, le cui coordinate sono passate
    come parametro alla funzione. Ritorna un array di due elementi, nel quale alla prima posizione si trova la derivata
    parziale in x calcolata nel punto, mentre alla seconda posizione si trova la derivata parziale in y calcolata nel punto
    */
    virtual std::array<double,2> grad(double x, double y) const = 0;    //Calcolo del gradiente nel punto (x,y)

    /*minimo() restituisce il valore minimo m della funzione, calcolato a priori con l'analisi matematica. Non viene 
    usato dall'algoritmo, ma serve solo per calcolare l'errore e_k = f(p_k) - m. Per tutte le funzioni del progetto 
    il minimo vale 0, quindi la classe base restituisce 0; una funzione con minimo diverso deve ridefinire questo metodo
    */
    virtual double minimo() const;

    /*normaGrad(std::array<double,2> grad) restituisce la norma del gradiente passato come parametro, 
    ovvero la radice quadrata della somma dei quadrati delle due derivate parziali
    */
    virtual double normaGrad(std::array<double,2> grad) const;    

    //distruttore di default
    virtual ~Function() = default;
};

class Function1 : public Function{
    public:
    double value(double x, double y) const override; 
    std::array<double,2> grad(double x, double y) const override;
};


class Function2 : public Function{
    public:
    double value(double x, double y) const override;
    std::array<double,2> grad(double x, double y) const override;
};

class Function3 : public Function{
    public:
    double value(double x, double y) const override;
    std::array<double,2> grad(double x, double y) const override;
};

class Function4 : public Function{
    public:
    double value(double x, double y) const override;
    std::array<double,2> grad(double x, double y) const override;    
};

class Function5 : public Function{
    public:
    double value(double x, double y) const override;
    std::array<double,2> grad(double x, double y) const override;    
};

class Function6 : public Function{
    public:
    double value(double x, double y) const override;
    std::array<double,2> grad(double x, double y) const override;    
};

class Function7 : public Function{
    public:
    double value(double x, double y) const override;
    std::array<double,2> grad(double x, double y) const override;    
};

class Function8 : public Function{
    const double PI;
    public:
    Function8() : PI(std::acos(-1.0)){} // costruttore ridefinito per definire la variabile costante PI, che contiene pi greco
    double value(double x, double y) const override;
    std::array<double,2> grad(double x, double y) const override;    
};

#endif //FUNCTION_H