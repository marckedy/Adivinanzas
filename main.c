

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int hora=time(NULL);
    int x,num,intentos,intentos2=10,jugar;
    srand(hora);
    
    
    printf("Adivine la hora que estoy pensando del 1 al 1000 \n");
    printf("Tienes 10 intentos\n");
    do{
        x=rand() % 1000;
        intentos=intentos2;
    do{
        if(jugar==1){
            printf("\nTienes %d intentos\n", intentos);
        }
        jugar--;
        scanf("%d",&num);
        if(num>x)
            printf("\tMenos\n");
        if(num<x)
            printf("\tMas\n");
        intentos--;
    }while((num!=x) && (intentos!=0));
    
    if(num!=x){
        printf("\n\nLo siento, ya no tiene más intentos\n");
        printf("Era el numero %d\n",x);
        intentos2++;
    }else{
        printf("\n¡Exelente adinivinaste el número!\n");
        intentos2--;
    }
    
    printf("\nLo quieres intentar de nuevo?\n");
    printf("Si = Escriba el numero 1\n");
    printf("No = Escriba el numero 2\n");
    scanf("%d", &jugar);
    }while(jugar==1);

    return 0;
}

