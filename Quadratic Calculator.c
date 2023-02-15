// Emily Pariag
// 18-02-2023
// Write a program in C to the determine the roots of the quadratic equation for
// m amount of equations. The code must cater for the discrimination of roots.

#include <math.h>
#include <stdio.h>

// Begin Main Program
int main(void) {

  // Declaration and Initilization of Variables
  int counter = 1;
  int m = 0;
  int DiscriminantPart1 = 0;
  int DiscriminantPart2 = 0;
  int a = 0;
  int b = 0;
  int c = 0;
  double Discriminant = 0.0;
  double Sqroot = 0.0;
  double x_add = 0.0;
  double x_sub = 0.0;

  printf("Welcome to Emily's Quadratic Calculator! \n\nThis program will determine the roots for a select number of quadratic equations.");//prints a message to the screen, greeting the user
  
  printf("\nGeneral Quadratic Equation: ax^2 + bx + c = 0");//prints a message to the screen, reminding user of the mathematical formula
  
  printf("\n\nThe program will utilize the quadratic formula to solve for x. Please note that all answers will be approximated to three decimal places.");//prints a message to the screen, explaining how the program will calculate the roots
  
  printf("\n\nTo begin, you must enter the number of equations you would like the program to solve.");//prints a message to the screen, instructing the user
  
  printf("\nNumber of Quadratic Equations to be solved: ");//prints a message to the screen, prompting the user to enter the number of quadratic equations they would like the program to solve
  scanf("%d", &m);//requests the user to enter the number of quadratic equations

  while (counter<=m) { //Beginning of While Loop, Condition to be tested
	
    printf("\n\nPlease enter the value of a: ");//prints a message to the screen, prompting the user to enter the number represented by a in the general formula.
    scanf("%d", &a); //requests the user to enter the value of a

    printf("\n");//prints a blank line to the screen

    printf("Please enter the value of b: ");//prints a message to the screen, prompting the user to enter the number represented by b in the general formula.
    scanf("%d", &b);//requests the user to enter the value of b

    printf("\n");//prints a blank line t the screen

    printf("Please enter the value of c: ");//prints a message to the screen, prompting the user to enter the number represented by c in the general formula.
    scanf("%d", &c);//requests the user to enter the value of c

    printf("\n");//prints a blank line to the screen
	   
    //Calculating the sum of the Discriminant
    DiscriminantPart1 = b * b; //Calculating the square of b
    DiscriminantPart2 = (4 * a) * c;//Calculating the product of 4 multiplied by a and c

    Discriminant = (DiscriminantPart1)-(DiscriminantPart2);//Calculating the difference to find the Discriminant sum
    
	printf("\nSum of Discriminant = %lf", Discriminant);//prints a message to the screen, displaying the sum of the Discriminant

    printf("\n");//prints a blank line to the screen
    printf("\n");//prints a blank line to the screen
    
    if (Discriminant < 0) { //Beginning of Nest If-Else Statement, Condition to be tested
      
	  printf("The discriminant is less then zero, therefore, there are no solutions for the quadratic equation.\n");//prints statement if the condition is true    
	
	} else { //End of Nested If-Else. If the condition is false then the program tests the second nested if-else statement
      if (Discriminant == 0) { //Beginning of Second Nested If-Else Statement, Condition to be tested
        
		printf("The discriminant is equal to zero, therefore, there is one solution for the quadratic equation."); ////prints statement if the condition is true

        Sqroot = sqrt(Discriminant);//Calculates the square root of the Discriminant

        printf("\n\nSquare root of Discriminant = %lf", Sqroot);//prints a message to the screen, displaying the square root of the discriminant

        //Calculating the root of the quadratic equation
        x_add = (-b) + Sqroot;//Addition of the co-efficient (-b) and the square root of the discriminant.
        x_add = x_add / (2 * a); //Division to find the root

        x_sub = (-b) - Sqroot;//Subtraction of the co-effiecient (-b) and the square root of the discriminant

        printf("\n\nx = %.3lf\n", x_add);//prints the root to the screen; approximated to 3 decimal points

      } else { 
	        printf("The discriminant is greater then zero, therefore, there are two solutions for the quadratic equation.");//prints statement if the condition is false
	
	        Sqroot = sqrt(Discriminant);//Calculates the square root of the Discriminant
	
	        printf("\n\nSquare root of Discriminant = %lf", Sqroot);//prints a message to the screen, displaying the square root of the Discriminant
	
	          //Calculating the roots of the Quadratic Equation
	        x_add = (-b) + Sqroot;//Addition of the co-efficient (-b) and the square root of the discriminant.
	        x_add = x_add / (2 * a); //Division to find the root
	
	        x_sub = (-b) - Sqroot;//Subtraction of the co-effiecient (-b) and the square root of the discriminant
	        x_sub = x_sub / (2 * a);//Division to find the root

        	printf("\n\nx = %.3lf", x_add);//prints the root to the screen; approximated to 3 decimal points
        	printf("\nOR\nx = %.3lf\n", x_sub);//prints the root to the screen; approximated to 3 decimal points
       	 	
			}//End of Nested If-Else Statement
			
      	}//End of Nested If-Else Statement

    counter= counter + 1;//incrementing counter variable 
    
  }//End of While Loop
  
} // End of Program
  