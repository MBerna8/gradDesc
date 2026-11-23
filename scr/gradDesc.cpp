#include <iostream>
#include "../include/gradDesc.h"

gradDesc::gradDesc(int itr, double sgl) : N(itr), T(sgl){}

void gradDesc::run(double &x, double &y, const Function &f, double passo){
    int i=0;
    std::array<double,2> gradient = f.grad(x, y); 
    double error = f.value(x, y) - f.minimo();

    while(checkGrad(f, gradient, i)){
        if(i%10 == 0){
            printf("%4d | (%10.6f, %10.6f) | %12.6f | %12.6f | %12.6f\n", i, x, y, f.value(x, y), error, f.normaGrad(gradient));        }
        x -= passo*gradient[0];
        y -= passo*gradient[1];

        gradient = f.grad(x,y);
        error = f.value(x,y) - f.minimo();
        i++;
    }
    printf("%4d | (%10.6f, %10.6f) | %12.6f | %12.6f | %12.6f\n", i, x, y, f.value(x, y), error, f.normaGrad(gradient));
}
bool gradDesc::checkGrad(const Function& f, std::array<double,2> grad, int i) const{
    return (i<N && f.normaGrad(grad)>=T);
}