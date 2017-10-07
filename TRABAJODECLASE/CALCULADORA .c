#include <stdio.h>
//Este archivo llama otros archivos realizado en LINUX

int main(){

    int sum = system("./SUMA.c");
    int res = system("./RESTA.c");
    int mul = system("./MULTIPLICACION.c");
    int div = system("./DIVISION.c");
        return 0;

}

