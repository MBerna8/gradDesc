#ifndef FUNCTION_H
#define FUNCTION_H
#include <array>

/*SPIEGAZIONE CLASSE*/
class Function{
    public:  
    /*value(double x, double y) restituisce il valore della funzione calcolato in un punto (x,y), le cui coordinate sono 
    passate come parametri. La funzione viene sovrascritta per ciascuna classe, che ne specifica la rispettiva funzione
    */
    virtual double value(double x, double y) = 0;

    /*grad(double x, double y) restituisce il valore del gradiente in un determinato punto, le cui coordinate sono passate
    come parametro alla funzione. Ritorna un array di due elementi, nel quale alla prima posizione si trova la derivata
    parziale in x calcolata nel punto, mentre alla seconda posizione si trova la derivata parziale in y calcolata nel punto
    */
    virtual std::array<double,2> grad(double x, double y) = 0;    //Calcolo del gradiente nel punto (x,y)

    double minimo() ;            //Restituisce valore di contollo 

    /*normaGrad(std::array<double,2> grad)*/
    virtual double normaGrad(std::array<double,2> grad);    

    //distruttore di default
    virtual ~Function() = default;
};

class Function1 : public Function{
    public:
    double value(double x, double y) override;  //Restituisce il valore della funzione nel punto (x,y), fornito come parametro
    std::array<double,2> grad(double x, double y) override; 
};


class Function2 : public Function{
    public:
    double value(double x, double y) override;
    std::array<double,2> grad(double x, double y) override;    
};

class Function3 : public Function{
    public:
    double value(double x, double y) override;
    std::array<double,2> grad(double x, double y) override;    
};

class Function4 : public Function{
    public:
    double value(double x, double y) override;
    std::array<double,2> grad(double x, double y) override;    
};

class Function5 : public Function{
    public:
    double value(double x, double y) override;
    std::array<double,2> grad(double x, double y) override;    
};

class Function6 : public Function{
    public:
    double value(double x, double y) override;
    std::array<double,2> grad(double x, double y) override;    
};

class Function7 : public Function{
    public:
    double value(double x, double y) override;
    std::array<double,2> grad(double x, double y) override;    
};

class Function8 : public Function{
    public:
    double value(double x, double y) override;
    std::array<double,2> grad(double x, double y) override;    
};

#endif //FUNCTION_H