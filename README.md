Progetto intermedio - Discesa del gradiente (Laboratorio di Programmazione)

Gruppo:
- Matteo Bernardi
- Nikola Marjanovic
- Sebastiano Scanavacca

Il lavoro e' stato diviso in parti equivalenti tra i tre membri del gruppo. Il codice e' stato poi riletto
e verificato insieme.

Attivita' di ciascun membro:

- Matteo Bernardi
  Implementazione dell'algoritmo di discesa del gradiente (classe gradDesc): aggiornamento della posizione,
  criteri di terminazione (numero massimo di iterazioni N e soglia T sulla norma del gradiente) e stampa
  dell'output ogni 10 iterazioni e all'ultima. Organizzazione del progetto in cartelle.

- Nikola Marjanovic
  Implementazione delle funzioni f5, f6, f7, f8: formule, calcolo manuale delle derivate parziali e del
  minimo m. Scrittura di src/main.cpp con i test su tutte le funzioni.

- Sebastiano Scanavacca
  Progettazione della classe base astratta Function (value, grad, minimo, normaGrad) e implementazione
  delle funzioni f1, f2, f3, f4: formule, calcolo manuale delle derivate parziali e del minimo m.
  Scrittura dei commenti di documentazione di include/Function.h.

Struttura:
- include/Function.h, src/Function.cpp : classe base astratta Function e le classi Function1..Function8
  (valore, gradiente; il minimo m, usato solo per l'errore, vale 0 per tutte le funzioni).
- include/gradDesc.h, src/gradDesc.cpp : algoritmo di discesa del gradiente.
- src/main.cpp : test su tutte le funzioni.

Compilazione:
  g++ src/*.cpp -o gradDesc

Note per chi corregge:
- Il caso "f4, x negativo" termina in un minimo locale (err ~ 0.76): e' voluto, f4 ha anche un minimo locale per x<0.
- Il caso "f2, passo 0.2" e' volutamente divergente (il passo limite e' 0.125): l'output finisce con nan.
- Le iterazioni stampate sono quelle multiple di 10 e l'ultima.
