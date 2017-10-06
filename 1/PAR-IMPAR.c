#include <stdio.h>

int main()
{
        int i;

        printf("Introduzca cualquier numero:");

	scanf("%d",&i);

    if (i%2==0){
       printf("Es par.\n");
    }
    else
    {
       printf("No es par.\n");
    }
    return 0;
}
