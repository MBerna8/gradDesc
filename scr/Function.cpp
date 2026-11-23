#include "../include/Function.h"


double Function::minimo() const{
    return (0.0);
}

double Function::normaGrad(std::array<double,2> grad) const{
    return (std::sqrt(grad[0]*grad[0]+grad[1]*grad[1]));
}

// Funzione 1
double Function1::value(double x, double y) const{
    return (x*x + y*y)/2;
}

std::array<double,2> Function1::grad(double x, double y) const{
    return {x,y};
}

// Funzione 2
double Function2::value(double x, double y) const{ 
    return 0.5*(x*x + 16*y*y); 
}
std::array<double,2> Function2::grad(double x, double y) const{
    return {x, 16*y}; 
}

// Funzione 3
double Function3::value(double x, double y) const{
    double a = x*x - 1;
    return a*a + y*y;
}
std::array<double,2> Function3::grad(double x, double y) const{
    return {4*x*(x*x - 1), 2*y};
}

// f4
double Function4::value(double x, double y) const{
    double a = x*x - 1, b = x - 1;
    return a*a + b*b/5 + y*y;
}
std::array<double,2> Function4::grad(double x, double y) const{
    return {4*x*(x*x - 1) + 2*(x - 1)/5, 2*y};
}

// f5
double Function5::value(double x, double y) const{
    double s = std::sinh(x/2);
    return 4*s*s + y*y;
}
std::array<double,2> Function5::grad(double x, double y) const{
    return {2*std::sinh(x), 2*y};
}

// f6
double Function6::value(double x, double y) const{
    return std::log(1 + x*x + y*y);
}
std::array<double,2> Function6::grad(double x, double y) const{
    double d = 1 + x*x + y*y;
    return {2*x/d, 2*y/d};
}

// f7
double Function7::value(double x, double y) const{
    return 1 - std::exp(-(x*x + y*y));
}
std::array<double,2> Function7::grad(double x, double y) const{
    double e = std::exp(-(x*x + y*y));
    return {2*x*e, 2*y*e};
}

// f8
double Function8::value(double x, double y) const{
    return 2 - std::cos(PI*x) - std::cos(PI*y);
}
std::array<double,2> Function8::grad(double x, double y) const{
    return {PI*std::sin(PI*x), PI*std::sin(PI*y)};
}
