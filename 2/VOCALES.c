#include <stdio.h>

int main(){

char palabras[]="Carrera de Matematicas Aplicadas y Computacion";

printf("%s %s\n", palabras, &palabras[10]);
puts(palabras);
puts(&palabras[10]);
return 0;
}

//Lo que pasa al cambiar el número es que puts imprime a partir del siguiente caracter
//por ejemplo: si es en 10 imprimira desde el onceav o caracter
