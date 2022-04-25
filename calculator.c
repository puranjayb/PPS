#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    //Project by Puranjay @2022
    /* Declaration of two numbers */
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    /* Features of basic calculator */
    int choice1; char choice2; char choice3; char choice4;
    printf("Enter 1 for arithmatic calculations\n");
    printf("Enter 2 for logic unit calculation\n");
    printf("Enter 3 for advanced operations\n");
    printf("Enter your choice: ");
    scanf("%d",&choice1);
    switch(choice1)
    {

        case(1):
        /* Basic mathematics caluclations */

            printf("\nEnter + to add the two numbers\n");
            printf("Enter - to subtract the two numbers\n");
            printf("Enter * to multiply the two numbers\n");
            printf("Enter / to divide the two numbers\n");
            printf("Enter R to find remainder of two numbers\n");
            printf("Enter Your Choice: ");
            scanf("%s",&choice2);

            switch(choice2)
            {
                case('+'):
                    printf("\nAddtion is %d",num1+num2);
                    break;
                case('-'):
                    printf("\nSubtraction is %d",num1-num2);
                    break;
                case('*'):
                    printf("\nMultiplication is %d",num1*num2);
                    break;
                case('/'):
                    printf("\nDivision is %d",num1/num2);
                    break;
                case('R'):
                    printf("\nRemainder is %d",num1%num2);
                    break;
            }
        break;

        case(2):
        /* To perform logic gate operations */
            printf("\nEnter A to perform OR gate\n");
            printf("Enter B to perform AND gate\n");
            printf("Enter C to perform XOR gate\n");
            printf("Enter D to perform Compliment gate\n");
            printf("Enter your choice: ");
            scanf("%s",&choice3);
            switch(choice3)
            {
                case('A'):
                    printf("\n%d OR %d is %d",num1,num2,(num1|num2));
                break;
                case('B'):
                    printf("\n%d AND %d is %d",num1,num2,(num1&num2));
                break;
                case('C'):
                    printf("\n%d XOR %d is %d",num1,num2,(num1^num2));
                break;
                case('D'):
                    printf("\n%d and %d COMPLIMENT is %d and %d",num1,num2,~num1,~num2);
                break;
            }
        break;

        case(3):
        /*To perform advance caluclations*/
            printf("\nEnter a to get Square of a number\n");
            printf("Enter b to get Square Root of a number\n");
            printf("Enter c to get Cube of a number\n");
            printf("Enter d to get Cube Root of a number\n");;
            printf("Enter your choice: ");
            scanf("%s",&choice4);

            switch(choice4)
            {
                case 'a':
                    printf("\nSquare of %d and %d is %d and %d",num1,num2,pow(num1,2),pow(num2,2));
                    break;
                case 'b':
                    printf("\nSquare Root of %d and %d is %d and %d",num1,num2,sqrt(num1),sqrt(num2));
                    break;
                case 'c':
                    printf("\nSquare of %d and %d is %d and %d",num1,num2,pow(num1,3),pow(num2,3));
                    break;
                case 'd':
                    printf("\nSquare of %d and %d is %d and %d",num1,num2,cbrt(num1),cbrt(num2));
                    break;
            }
        break;    
    }
}
//Project by Puranjay @2022