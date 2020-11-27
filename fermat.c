/* Teorema de Fermat: Dados A un número natural y P un número primo,
si se eleva A a la potencia P y al resultado se le resta A, 
lo obtenido es siempre divisible por P. 

Realizar funcion POTENCIA y funcion FERMAT.     */

#include <stdio.h>
int POTENCIA(int, int);
int FERMAT(int, int);

int main()
{
    int A, P, flag=0;
    for (A = 2; A<9 && flag == 0; A++) 
        for (P = 3; P < 8; P += 2) 
            if (FERMAT(A, P) == 0)
                flag = 1;
    if (flag == 0)
        printf("El teorema se cumple\n");
    else
        printf("El teorema NO se cumple\n");
    return 0;
}

// genera la potencia de base elevado al exponente
int POTENCIA(int base, int exponente) 
{
    int i, resultado;
    resultado = base;
    for (i = 1;i < exponente;i++) 
        resultado *= base;
    return resultado;
}

// retorna 1 si se verifica el teorema fermat, caso contrario retorna 0
int FERMAT(int A, int P) 
{
    if ((POTENCIA(A, P) - A)%P == 0)
        return 1;
    else
        return 0;
}
