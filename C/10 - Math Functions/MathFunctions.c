#include <stdio.h>
//First in first, we need to include the <math.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(){
      
      double A = sqrt(64);        // Square root
      double B = pow(2,5);        // Power of
      int C = round(3.14);        // Rounder
      int D = ceil(3.14);         // Round to ceilling
      int E = floor(3.14);        // Round to floor
      double F = fabs(-300);      // To get the absolute value
      double G = log(10);         // To get the log
      double Z = sin(0.866);      // Gets the sin (the value must be in radians)
      double X = cos (0.5);       // Gets the cosin (the value must be in radians)
      double J = tan (60);        // Gets the tangent (the value must be in radians)




    // Vai em portugues mesmo kkkk... Fiz uma pequena funcao pra converter graus para radianos

    double angle_degrees = 60; //Pode ser implementado um sistema no qual o usuario insira o angulo para a captura de dados
    
    double angle_radians = angle_degrees * PI / 180.0; //Considerando que 180 graus = PI RAD

    double H = sin(angle_radians);
    double I = cos(angle_radians);
    double L = tan(angle_radians);

    printf("\n%lf", H);
    printf("\n%lf", I);
    printf("\n%lf", L);

    return 0;
}