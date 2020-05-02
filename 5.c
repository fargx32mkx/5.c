#include<stdio.h>
#include<stdlib.h>

int main(){

    float *arreglo;
    int ndatos;

    system("cls");
    printf("Dame el numero de datos que deseas en tu arreglo ");
    scanf("%d",&ndatos);

    while(ndatos<=0){// while para verificar que no sera negativo o 0
        printf("\ningrese un numero positivo y que no sea cero");
        scanf("%d",&ndatos);
    }

    arreglo=(float *)malloc(ndatos*sizeof(int));//reservacion de la memoria usando el ndatos

    for(int i=0; i<ndatos ;i++){// gurda los datos ingresados en la memoria antes reservada 
        printf("Dame el valor de el numero [%d] = ",i);
        scanf("%f",&arreglo[i]);
    }



    for(int i=0; i<ndatos;i++){
        printf("arreglo[%d] = %g \n",i, arreglo[i]);//imprime datos del arreglo 
    }

    free(arreglo);//liberas memoria reservada con el malloc
    system("pause");
    return 0;
}
