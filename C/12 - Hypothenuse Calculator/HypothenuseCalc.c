#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(){
    
    double A;
    double B;
    double C;

    printf("\nHow long is the side A? :");
    scanf("%lf", &A);

    printf("\nHow long is the side B? :");
    scanf("%lf", &B);

    C = sqrt((A * A) + (B * B));


    if (C == (int)C) {

        printf("\nConsidering that the triangle is a right-angled triangle, the side C is consequently : %.2lf\n", C);
        printf("That surely is Pythagorean Triangle.\n");

    } else {

        printf("\nConsidering that the triangle is a right-angled triangle, the side C is consequently : %.2lf\n", C);
        printf("That is not a Pythagorean Triangle.\n");
    }

    return 0;
}