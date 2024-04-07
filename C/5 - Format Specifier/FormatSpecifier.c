#include <stdio.h>

int main(){

    // %f = float index
    
    // %.x = decimal precision
    // %x = minimum field width
    // Where X defines the number of decimals you want
    // %- = left align

    float bananaKg = 9.99;
    float gas = 3.698534;
    float dChallenger = 12999;

    printf("valor do Kg da banana :\t $%.2f \n", bananaKg);
    printf("valor da gasolina :\t $%.4f \n", gas);
    printf("valor de um otimo carro : $%.2f \n", dChallenger);
    return 0;
}
