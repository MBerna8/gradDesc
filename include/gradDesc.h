
class Function{
    public:
    
    virtual double value(double x, double y) = 0;     //Valore della funzione nel punto (x,y)

    virtual double* grad(double x, double y) = 0;    //Calcolo del gradiente nel punto (x,y)

    virtual double minimo() = 0;            //Restituisce valore di contollo 

    double normaGrad(double* grad);    //Calcolo della norma del gradiente nel punto (x,y)

};

class Function1 : public Function{
    double value(double x, double y) override;
    
    double* grad(double x, double y) override;    
};

class Function2 : public Function{
    double value(double x, double y) override;
    
    double* grad(double x, double y) override;    
};

class Function3 : public Function{
    double value(double x, double y) override;
    
    double* grad(double x, double y) override;    
};

class Function4 : public Function{
    double value(double x, double y) override;
    
    double* grad(double x, double y) override;    
};

class Function5 : public Function{
    double value(double x, double y) override;
    
    double* grad(double x, double y) override;    
};

class Function6 : public Function{
    double value(double x, double y) override;
    
    double* grad(double x, double y) override;    
};

class Function7 : public Function{
    double va(double x, double y) override;
    
    double* grad(double x, double y) override;    
};

class Function8 : public Function{
    double value(double x, double y) override;
    
    double* grad(double x, double y) override;    
};
