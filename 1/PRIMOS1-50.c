#include <stdio.h>

int main()
{
        int i;

        printf("Introduzca numero del 1 al 10:");

	scanf("%d",&i);

    if (i!=2&&i!=3&&i!=5&&i!=7&&i!=11&&i!=13&&i!=17&&i!=19&&i!=23&&i!=29&&i!=31&&i!=37&&i!=41&&i!=43&&i!=47){
       printf("No es primo.\n");
    }
    else
    {
       printf("Es primo.\n");
    }
    return 0;
}
