//Emily Pariag
//18-02-2023
//Write a program in C to the determine the roots of the quadratic equation for m amount of equations. The code must cater for the discrimination of roots.

#include <stdio.h>
#include <math.h>

//Begin Main Program
int main (void) {

  double a = 0;
  double b = 0;
  double c = 0;
  double Discriminant = 0.0; 

    printf("Please enter the value of a: ");
    scanf("%d", &a);

    printf("\n");

    printf("Please enter the value of b: ");
    scanf("%d", &b);

    printf("\n");

    printf("Please enter the value of c: ");
    scanf("%d", &c);

    Discriminant=((b*b)-((4*a)*c));

  
}
