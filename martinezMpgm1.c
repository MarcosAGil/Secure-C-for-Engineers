/*
*********************************************************************
     Author    : Marcos Antonio Martínez Gil
     Course    : COP 2270 Sec ANSI C Online
     Professor : Michael Robinson
     Program # : Program Purpose/Description
                 {Secure programming for engineering and science students using 
                 ANSI C. Developing algorithms and code for problems in 
                 engineering and science, using secure techniques.}
     Due Date  : 06/02/2023

     Certification:
     I hereby certify that this work is my own and none of it is the work of any other person.

     ..........{ Marcos A. Martínez Gil }..........
     *********************************************************************
*/

#include<stdio.h>

void numericalComputations()
{
    int maximunNumber = 100;

    printf("\nModule\n");
    printf("%d\n", maximunNumber % 1);
    printf("%d\n", maximunNumber % 2);
    printf("%d\n", maximunNumber % 3);
    printf("%d\n", maximunNumber % 4);
    printf("%d\n", maximunNumber % 5);
    printf("%d\n", maximunNumber % 6);
    printf("%d\n", maximunNumber % 7);
    printf("%d\n", maximunNumber % 8);
    printf("%d\n", maximunNumber % 9);
    printf("%d\n", maximunNumber % 10);
    
    printf("\nSubtraction\n");
    printf("%d\t", maximunNumber - 1);
    printf("%d\t", maximunNumber - 2);
    printf("%d\t", maximunNumber - 3);
    printf("%d\t", maximunNumber - 4);
    printf("%d\t", maximunNumber - 5);
    printf("%d\t", maximunNumber - 6);
    printf("%d\t", maximunNumber - 7);
    printf("%d\t", maximunNumber - 8);
    printf("%d\t", maximunNumber - 9);
    printf("%d\t", maximunNumber - 10);
    
    printf("\nAddition\n");
    printf("%d\n", maximunNumber + 1);
    printf("%d\n", maximunNumber + 2);
    printf("%d\n", maximunNumber + 3);
    printf("%d\n", maximunNumber + 4);
    printf("%d\n", maximunNumber + 5);
    printf("%d\n", maximunNumber + 6);
    printf("%d\n", maximunNumber + 7);
    printf("%d\n", maximunNumber + 8);
    printf("%d\n", maximunNumber + 9);
    printf("%d\n", maximunNumber + 10);
    
    printf("\nMultiplication\n");
    printf("%d\t", maximunNumber * 1);
    printf("%d\t", maximunNumber * 2);
    printf("%d\t", maximunNumber * 3);
    printf("%d\t", maximunNumber * 4);
    printf("%d\t", maximunNumber * 5);
    printf("%d\t", maximunNumber * 6);
    printf("%d\t", maximunNumber * 7);
    printf("%d\t", maximunNumber * 8);
    printf("%d\t", maximunNumber * 9);
    printf("%d\t", maximunNumber * 10);
    
    printf("\nDivision\n");
    printf("%d\n", maximunNumber / 1);
    printf("%d\n", maximunNumber / 2);
    printf("%d\n", maximunNumber / 3);
    printf("%d\n", maximunNumber / 4);
    printf("%d\n", maximunNumber / 5);
    printf("%d\n", maximunNumber / 6);
    printf("%d\n", maximunNumber / 7);
    printf("%d\n", maximunNumber / 8);
    printf("%d\n", maximunNumber / 9);
    printf("%d\n", maximunNumber / 10);

} // end of NumericalComputations()

void sumOfNumbers()
{
    int N = 100;
    
    printf("The sum of all numbers from 1 to 100 is: %d\n", (1 + N)*(N/2));

} // end of void sumOfNumbers()

void myinfo(char Name[], char Major[], int CompletedCredits, int CreditsSpring23, char ClassName[])
{
printf("Hi, my name is %s\nMy major is %s\nI have completed %d credits \nand I am taking %d credits. \nThis class's name is %s", Name, Major, CompletedCredits, CreditsSpring23, ClassName);

} // end of myinfo()

int main (void)
{
    char Name[] = "Marcos Antonio Martinez Gil";
    char Major[] = "Mathematics";
    int CompletedCredits = 75;
    int CreditsSpring23 = 15;
    char ClassName[] = "Secure C for engineers \n";

    numericalComputations();
    sumOfNumbers();

    myinfo(Name, Major, CompletedCredits, CreditsSpring23, ClassName);

    //Exercise 5)

    // Part a) 
    printf("\nFOR\n");

    int maximunNumber = 100;

    printf("\nModule\n");
    for(int x; x <= 10; x++)
    {
        printf("%d\n", maximunNumber % x);
    }

    printf("\nSubtraction\n");
    for(int x; x <= 10; x++)
    {
        printf("%d\t", maximunNumber - x);
    }

    printf("\nAddition\n");
    for(int x; x <= 10; x++)
    {
        printf("%d\n", maximunNumber + x);
    }

    printf("\nMultiplication\n");
    for(int x; x <= 10; x++)
    {
        printf("%d\t", maximunNumber * x);
    }

    printf("\nDivision\n");
    for(int x; x <= 10; x++)
    {
        printf("%d\n", maximunNumber / x);
    }

    // Part b)
    printf("\nWHILE\n");

    int x = 0;
    printf("\nModule\n");
    while (x <= 10)
    {
        printf("%d\n", maximunNumber % x);
        x++;
    }
    
    x = 0;
    printf("\nSubtraction\n");
    while (x <= 10)
    {
        printf("%d\t", maximunNumber - x);
        x++;
    }

    x = 0;
    printf("\nAddition\n");
    while (x <= 10)
    {
        printf("%d\n", maximunNumber + x);
        x++;
    }

    x = 0;
    printf("\nMultiplication\n");
    while (x <= 10)
    {
        printf("%d\t", maximunNumber * x);
        x++;
    }

    x = 0;
    printf("\nDivision\n");
    while (x <= 10)
    {
        printf("%d\n", maximunNumber / x);
        x++;
    }

    // Part c)
    int suma;
    suma = 0;

    printf("\nThe sum of all numbers from 1 to 100 is: " );
    for(int x; x <= 100; x++)
    {
        printf("%d + ", x);
        suma = suma + x;
    }
    printf("= %d", suma);

return 0;
} //end of int main(void)
