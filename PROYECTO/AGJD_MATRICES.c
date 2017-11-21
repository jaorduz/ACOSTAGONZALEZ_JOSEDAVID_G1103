#include<stdio.h>
#include<stdlib.h>
#define N 100

void lectura(float matriz[N][N],int dim1 ,int dim2 ){
    int i, j;
    for(i=0;i<dim1;i++){
        for(j=0;j<dim2;j++){
            printf("Introduce el valor A[%i][%i]: ",i+1,j+1);
            scanf("%f",&matriz[i][j]);
        }
    }
}

void imprimir(float matriz[N][N],int dim1 ,int dim2 ){
    int i, j;
    for(i=0;i<dim1;i++){
        for(j=0;j<dim2;j++){
            printf("%.2f ",matriz[i][j]);
        }
        printf("\n");
    }
}

void suma(float matriz[N][N],float matriz2 [N][N],int dim1 ,int dim2 ){
    int i, j;
    for(i=0;i<dim1;i++){
        for(j=0;j<dim2;j++){
            printf("%.2f ",matriz[i][j]+matriz2[i][j]);
        }
        printf("\n");
    }
}

void resta(float matriz[N][N],float matriz2 [N][N],int dim1 ,int dim2 ){
    int i, j;
    for(i=0;i<dim1;i++){
        for(j=0;j<dim2;j++){
            printf("%.2f ",matriz[i][j]-matriz2[i][j]);
        }
        printf("\n");
    }
}

void producto(float A[N][N], float B[N][N], int n_A, int m_A, int n_B, int m_B) {
    int i, j, k;
    float prod;
    printf("El resultado del producto A*B es:\n");
    for(i = 0; i < n_A; i ++) {
        for(j = 0; j < m_B; j++) {
            prod = 0;
            for(k = 0; k < m_A; k++) {
                prod += A[i][k] * B[k][j];
            }
            printf("%.2f ", prod);
        }
        printf("\n");
    }
}

int main(){
    int o,i,j,k;
    float m[N][N];
    float m2[N][N];
    int dim1A,dim2A,dim1B,dim2B;

    printf("Este es un programa para relizar operaciones con matrices\n");
    printf("Realizado por: JOSE DAVID ACOSTA GONZALEZ GRUPO 1103\n");
    do {
        printf("\n\nElige una operacion entre matrices:\n 1-SUMA\n 2-RESTA\n 3-MULTIPLICACION\n 4-SALIR\n");
        scanf("%i",&o);
        system("cls");
        switch(o) {
            case 1:
            system("cls");
            printf("Suma de matrices\n");
            printf("Ingrese la dimension 1 de matriz A: ");
            scanf("%d", &dim1A);
            printf("Ingrese la dimension 2 de matriz A: ");
            scanf("%d", &dim2A);
            printf("Ingrese la dimension 1 de matriz B: ");
            scanf("%d", &dim1B);
            printf("Ingrese la dimension 2 de matriz B: ");
            scanf("%d", &dim2B);
            if(dim1A==dim1B&&dim2A==dim2B){
                    lectura(m,dim1A,dim2A);
                    printf("La matriz A es:\n");
                    imprimir(m,dim1A,dim2A);
                    lectura(m2,dim1B,dim2B);
                    printf("La matriz B es:\n");
                    imprimir(m2,dim1B,dim2B);
                    printf("\nEl resultado de la suma A + B es:\n");
                    suma(m,m2,dim1A,dim2A);
            }
            else {
                printf("Las dimensiones de  A y B no son las mismas");
            }
                break;
            case 2:
                    printf("Resta de matrices\n");
                    printf("Ingrese la dimension 1 de matriz A: ");
                    scanf("%d", &dim1A);
                    printf("Ingrese la dimension 2 de matriz A: ");
                    scanf("%d", &dim2A);
                    printf("Ingrese la dimension 1 de matriz B: ");
                    scanf("%d", &dim1B);
                    printf("Ingrese la dimension 2 de matriz B: ");
                    scanf("%d", &dim2B);
                    if(dim1A==dim1B&&dim2A==dim2B){
                    lectura(m,dim1A,dim2A);
                    printf("La matriz A es:\n");
                    imprimir(m,dim1A,dim2A);
                    lectura(m2,dim1B,dim2B);
                    printf("La matriz B es:\n");
                    imprimir(m2,dim1B,dim2B);
                    printf("\nEl resultado de la resta A - B es:\n");
                    resta(m,m2,dim1A,dim2A);
                    }
                    else {
                        printf("Las dimensiones de  A y B no son las mismas");
                    }
                    break;
            case 3:
                    printf("Multiplicacion de matrices\n");
                    printf("Dame la dimension de la matriz A: ");
                    scanf("%d", &dim1A);
                    printf("Ingrese la dimension 2 de matriz A: ");
                    scanf("%d", &dim2A);
                    printf("Ingrese la dimension 1 de matriz B: ");
                    scanf("%d", &dim1B);
                    printf("Ingrese la dimension 2 de matriz B: ");
                    scanf("%d", &dim2B);
                    if(dim2A == dim1B) {
                        printf("La matriz resultante será de %dx%d\n", dim1A, dim2B);
                        lectura(m,dim1A,dim2A);
                        printf("La matriz A es:\n");
                        imprimir(m,dim1A,dim2A);
                        lectura(m2,dim1B,dim2B);
                        printf("La matriz B es:\n");
                        imprimir(m2,dim1B,dim2B);
                        producto(m, m2, dim1A, dim2A, dim1B, dim2B);
                        break;
                    }
                    else {
                        printf("El producto no puede llevarse a cabo\n");
                    }
            case 4:
                printf("Gracias por utilizar el programa, hasta luego\n");
                break;
            default:
                printf("\aNo elegiste una operacion establecida 1/3,reintente\n");
                break;
        }
    } while(o != 4);
    return 0;
}
