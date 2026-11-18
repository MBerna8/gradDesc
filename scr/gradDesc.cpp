#include <iostream>
#include "../include/gradDesc.h"

gradDesc::gradDesc(int itr, double sgl){
    gradDesc::N = itr;
    gradDesc::T = sgl;
}

void gradDesc::iterazione(double &x, double &y, Function &f, double passo){
    int i=0;
    std::array<double,2> gradient = f.grad(x, y); 
    
    double error;

    while(!checkGrad(f, gradient, i)){
        if(i%10 == 0){
            std::cout << i << "      ( " << x << ", " << y << ")" << "      ( " << f.value(x,y) << " )" << "      err= " << error << "      " << f.normaGrad(gradient);
        }
        x -= passo*gradient[0];
        y -= passo*gradient[1];

        gradient = f.grad(x,y);
        error = f.value(x,y) - f.minimo();
        i++;
    }
    if((i%10)!=0){
        std::cout << i << "      ( " << x << ", " << y << ")" << "      ( " << f.value(x,y) << " )" << "      err= " << error << "      " << f.normaGrad(gradient)<<std::endl;
    }
}
bool gradDesc::checkGrad(Function& f, std::array<double,2> grad, int i){
    return (i<N && f.normaGrad(grad)>=T);
}