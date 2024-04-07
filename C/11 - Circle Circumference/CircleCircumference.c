#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(){
    

    double radius;
    double circumference;

    printf("\nEnter radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;

    printf("\nThe circle has a %.2lf circumference perimeter\n", circumference);
    
}