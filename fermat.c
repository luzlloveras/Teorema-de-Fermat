/* Teorema de Fermat: Dados A un número natural y P un número primo,
si se eleva A a la potencia P y al resultado se le resta A, 
lo obtenido es siempre divisible por P. 

Realizar funcion POTENCIA y funcion FERMAT.     */

#include <stdio.h>
int POTENCIA(int, int);
int FERMAT(int, int);

int main() {
    int A, P;
    for(A=2; A<9; A++) {
        for(P=3; P<8; P++) {
            if(FERMAT(A, P)==1)
                printf("El teoreama se cumple para %d y %d \n", A, P);
            else
                printf("El teoreama NO se cumple para %d y %d \n", A, P);
            P++;
        }
    }
    return 0;
}

// genera la potencia de base elevado al exponente
int POTENCIA(int base, int exponente) {
    int i, resultado=base;
    for(i=1;i<exponente;i++) {
        resultado*=base;
    }
    return resultado;
}

// retorna 1 si se verifica el teorema fermat, caso contrario retorna 0
int FERMAT(int A, int P) {
    if((POTENCIA(A, P) - A)%P == 0)
        return 1;
    else
        return 0;
}
