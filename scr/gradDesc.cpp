#include <iostream>
#include <cmath>
#include "gradDesc.h"

double Function::normaGrad(double* grad){
    return (sqrt(grad[0]*grad[0]+grad[1]*grad[1]));
}

// Funzione 1
double Function1::value(double x, double y){
    return (x*x + y*y)/2;
}

double* Function1::grad(double x, double y){
    return (x); 
}


// Funzione 2
double Function1::value(double x, double y){
    return (x*x + 16*y*y)/2;
}

double* Function1::grad(double x, double y){
    return (x);
}



// Funzione 1
double Function1::value(double x, double y){
    return (x*x + y*y)/2;
}

double* Function1::grad(double x, double y){
    return 
}



class gradDesc{

    protected:
    int N;
    double T;
    double m;

    public: 
    void spostamento(double &x, double &y, Function& f, double passo);        //Calcolo dello spostamento verso il passo successivo
    void iterazione(Function& f, double* grad);                          //Controlla se il gradiente è = 0 o inferiore della soglia T
    bool checkGrad(double* grad);


    void iterazione(double &x, double &y, Function& f, double passo){
        int i=0;
        double* grad = f.grad(x,y);
        double error;

        while(!checkGrad(f, grad, i)){
            if(i%10 == 0){
                std::cout << i << "      ( " << x << ", " << y << ")" << "      ( " << f.value(x,y) << " )" << "      err= " << error << "      " << f.normaGrad(grad);
            }
            x -= passo*grad[0];
            y -= passo*grad[1];

            delete[] grad;
            grad = f.grad(x,y);
            error = double(f.value(x,y)) - double(m);
            
            i++;
        }
        if((i%10)!=0){
                std::cout << i << "      ( " << x << ", " << y << ")" << "      ( " << f.value(x,y) << " )" << "      err= " << error << "      " << f.normaGrad(grad);
            }
        delete[] grad;
    }
    
    bool checkGrad(Function& f, double* grad,int i){
        return (i<N && f.normaGrad(grad)>=T);
    }

};