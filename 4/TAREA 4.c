#include<stdio.h>
#include<string.h>


int main(){

    char letra;

    printf("Dame una letra, ya sea mayuscula o minuscula\n");

    scanf("%c",&letra);

    letra = toupper(letra);




        switch(letra){
            case 'A':
                printf("Es vocal");
                   if(letra=='A'||letra=='E'||letra=='O'){

                   printf("Es una vocal abierta");
                   }
                   else {
                        printf("Es cerrada");
                   }
            break;
            case 'E':
                printf("Es vocal");
                 if(letra=='A'||letra=='E'||letra=='O'){

                   printf("Es una vocal abierta");
                   }
                   else {
                        printf("Es cerrada");
                   }
            break;
            case 'I':
                printf("Es vocal");
                 if(letra=='A'||letra=='E'||letra=='O'){

                   printf("Es una vocal abierta");
                   }
                   else {
                        printf("Es cerrada");
                   }
            break;
            case 'O':
                printf("Es vocal");
                 if(letra=='A'||letra=='E'||letra=='O'){

                   printf("Es una vocal abierta");
                   }
                   else {
                        printf("Es cerrada");
                   }

            break;
            case 'U':
                printf("Es vocal");

                 if(letra=='A'||letra=='E'||letra=='O'){

                   printf("Es una vocal abierta");
                   }
                   else {
                        printf("Es cerrada");
                   }


            break;
            }






    return 0;
}

