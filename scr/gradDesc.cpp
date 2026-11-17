#include <cmath>

class Function{
    
    public:
    virtual double f(double x, double y) = 0;     //Valore della funzione nel punto (x,y)
    virtual double* grad(double x, double y) = 0;    //Calcolo del gradiente nel punto (x,y)
    
    double normaGrad(double* grad);    //Calcolo della norma del gradiente nel punto (x,y)

};

class Function1 : public Function{
    double f(double x, double y) override;
    double* grad(double x, double y) override;    

};

double Function::normaGrad(double* grad){
    return (sqrt(grad[0]*grad[0]+grad[1]*grad[1]));
}

    // Funzione 1
    double Function1::f(double x, double y){
        return (x*x + y*y)/2;
    }

    double* Function1::grad(double x, double y){
        return (x);
    }


// Funzione 2
double Function1::f(double x, double y){
    return (x*x + 16*y*y)/2;
}

double* Function1::grad(double x, double y){
    return (x);
}



// Funzione 1
double Function1::f(double x, double y){
    return (x*x + y*y)/2;
}

double* Function1::grad(double x, double y){
    return (x);
}



class gradDesc{

    protected:
    double N,T;

    public: 
    double spostamento(double x, double y, double passo);        //Calcolo dello spostamento verso il passo successivo
    bool checkGrad(double* grad);      //Controlla se il gradiente è = 0 o inferiore della soglia T

};