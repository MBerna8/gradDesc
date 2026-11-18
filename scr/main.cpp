#include <iostream>
#include "../include/gradDesc.h"
#include "../include/Function.h"

using namespace std;

int main(){
    gradDesc g(10, 0.2);
    Function1 f;
    double x = 2, y = 3;
    cout << "Funzione 1";
    cout << f.minimo()<<endl;
    cout << f.normaGrad(f.grad(0,0))<<endl;
    g.iterazione(x,y,f,4);
}