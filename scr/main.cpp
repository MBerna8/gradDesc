#include <cstdio>
#include "../include/gradDesc.h"

int main() {
    Function1 f1;
    Function2 f2;
    Function3 f3;
    Function4 f4;
    Function5 f5;
    Function6 f6;
    Function7 f7;
    Function8 f8;

    gradDesc algoritmo(1000, 1e-6);
    double x, y;

    // Test 1: f1
    printf("\n=== f1 - passo 1/5 ===\n");
    printf("%4s | (%10s, %10s) | %12s | %12s | %12s\n", "Iter", "x", "y", "f(x,y)", "errore", "norma grad.");
    x = 3.0; 
    y = 3.0;
    algoritmo.run(x, y, f1, 1.0 / 5.0);

    // Test 2: f2
    printf("\n=== f2 - passo 2/25 ===\n");
    printf("%4s | (%10s, %10s) | %12s | %12s | %12s\n", "Iter", "x", "y", "f(x,y)", "errore", "norma grad.");
    x = 3.0; 
    y = 3.0;
    algoritmo.run(x, y, f2, 2.0 / 25.0);

    // Test 3: f3
    printf("\n=== f3 - passo 1/20 ===\n");
    printf("%4s | (%10s, %10s) | %12s | %12s | %12s\n", "Iter", "x", "y", "f(x,y)", "errore", "norma grad.");
    x = 1.2; 
    y = 1.2;
    algoritmo.run(x, y, f3, 1.0 / 20.0);

    // Test 4: f4
    printf("\n=== f4 - passo 1/20 ===\n");
    printf("%4s | (%10s, %10s) | %12s | %12s | %12s\n", "Iter", "x", "y", "f(x,y)", "errore", "norma grad.");
    x = 1.2; 
    y = 1.2;
    algoritmo.run(x, y, f4, 1.0 / 20.0);

    // Test 5: f5
    printf("\n=== f5 - passo 3/20 ===\n");
    printf("%4s | (%10s, %10s) | %12s | %12s | %12s\n", "Iter", "x", "y", "f(x,y)", "errore", "norma grad.");
    x = 1.0; 
    y = 1.0;
    algoritmo.run(x, y, f5, 3.0 / 20.0);

    // Test 6: f6
    printf("\n=== f6 - passo 3/10 ===\n");
    printf("%4s | (%10s, %10s) | %12s | %12s | %12s\n", "Iter", "x", "y", "f(x,y)", "errore", "norma grad.");
    x = 3.0; 
    y = 3.0;
    algoritmo.run(x, y, f6, 3.0 / 10.0);

    // Test 7: f7
    printf("\n=== f7 - passo 1/5 ===\n");
    printf("%4s | (%10s, %10s) | %12s | %12s | %12s\n", "Iter", "x", "y", "f(x,y)", "errore", "norma grad.");
    x = 1.0; 
    y = 1.0;
    algoritmo.run(x, y, f7, 1.0 / 5.0);

    // Test 8: f8
    printf("\n=== f8 - passo 1/10 ===\n");
    printf("%4s | (%10s, %10s) | %12s | %12s | %12s\n", "Iter", "x", "y", "f(x,y)", "errore", "norma grad.");
    x = 3.5; 
    y = 3.5;
    algoritmo.run(x, y, f8, 1.0 / 10.0);

    // Test aggiuntivo 1: f2 con punto iniziale alternativo
    printf("\n=== f2 - punto iniziale alternativo ===\n");
    printf("%4s | (%10s, %10s) | %12s | %12s | %12s\n", "Iter", "x", "y", "f(x,y)", "errore", "norma grad.");
    x = -2.0; 
    y = 1.5;
    algoritmo.run(x, y, f2, 2.0 / 25.0);

    // Test aggiuntivo 2: f3 con passo più piccolo
    printf("\n=== f3 - passo piu' piccolo ===\n");
    printf("%4s | (%10s, %10s) | %12s | %12s | %12s\n", "Iter", "x", "y", "f(x,y)", "errore", "norma grad.");
    x = 1.2; 
    y = 1.0;
    algoritmo.run(x, y, f3, 1.0 / 100.0);

    return 0;
}