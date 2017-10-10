#include <stdio.h>

int main()
{
        int i;

        printf("Introduzca numero del 1 al 10:");

	scanf("%d",&i);

    if (i!=2&&i!=3&&i!=5&&i!=7){
       printf("No es primo.\n");
    }
    else
    {
       printf("Es primo.\n");
    }
    return 0;
}
