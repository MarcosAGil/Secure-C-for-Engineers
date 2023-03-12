/*
*********************************************************************
     Author    : Marcos Antonio Martínez Gil
     Course    : COP 2270 Sec ANSI C Online
     Professor : Michael Robinson
     Program # : Program Purpose/Description
                 This code in C language contains a series of functions and operations to process data. 
                 The first functions are mathematical functions. The next function takes a character array as input and uses a loop to determine the type 
                 of each character (vowel, consonant, space, symbol). 
                 Then, there is a pyramid function that takes a character array as input and prints a pyramid formed by the characters. 
                 Finally, there is a parsing function that takes a character array as input and processes the data into different outputs.
     Due Date  : 02/21/2023

     Certification:
     I hereby certify that this work is my own and none of it is the work of any other person.

     ..........{ Marcos A. Martínez Gil }..........
     *********************************************************************
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int processAbsoluteValues(int x)
{

    return abs(x);
} // end of processAbsoluteValues

double processAbsoluteValues_double(double x)
{
    return fabs(x);
} // end of processAbsoluteValuesd

int processRoundValues(double x)
{

    return round(x);
} // end of processRoundValues

int processCeilingValues(double x)
{

    return ceil(x);
} // end of processCeilingValues

int processFlooringValues(double x)
{

    return floor(x);
} // end of processFlooringValues

double processMinimunValues(int i, int j, double x, double y)
{
    double minimum = fmin(fmin(i, j), fmin(x, y));

    return minimum;
} // end of processMinimunValues

double processMaximunValues(int i, int j, double x, double y)
{
    double maximum = fmax(fmax(i, j), fmax(x, y));

    return maximum;

} // end of processMaximunValues

double processTrigFunctionsValues_cos(double x)
{

    return cos(x);
}

double processTrigFunctionsValues_sin(double x)
{

    return sin(x);
}

double processTrigFunctionsValues_tan(double x)
{

    return tan(x);
}

double processExponentialValues(double x)
{

    return exp(x);
} // end of processExponentialValues

double processLogValues(double x)
{

    return log(x);
} // end of processLogValues

double processPowerValues(double b, double e)
{

    return pow(b,e);
}

double processSquareRootsValues(double x)
{

    return sqrt(x);
} // end of processSquareValues

int processRandomValues()
{
    int x = random();
    return x;
} // end of processRandomValues

void printCharacterInfo(char name[])
{
    int i;
    for (i = 0; name[i] != '\0'; i++) 
    {
        if (name[i] >= 'A' && name[i] <= 'Z') 
        {
            if (name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U') 
            {
                printf("character [%c] located at position %d is a vowel\n", name[i], i);
            } else 
            {
                printf("character [%c] located at position %d is a consonant\n", name[i], i);
            }
        } else if (name[i] >= 'a' && name[i] <= 'z') 
        {
            if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u') 
            {
                printf("character [%c] located at position %d is a vowel\n", name[i], i);
            } else 
            {
                printf("character [%c] located at position %d is a consonant\n", name[i], i);
            }
        } else if (name[i] == ' ') 
        {
            printf("character [ ] located at position %d is a space\n", i);

        } else if (name[i] == '%') 
        {
            printf("character [%%] located at position %d is a symbol\n", i);

        } else if (name[i] == '$') 
        {
            printf("character [\\$] located at position %d is a symbol\n", i);

        } else 
        {
            printf("character [%c] located at position %d is a symbol\n", name[i], i);
        }
    }  
}

void pyramid(char name[])
{

    int len = strlen(name);
    for (int i = len; i >= 0; i -= 2) 
    {
        printf("%*d [", len - i/2, i);

        for (int j = (len - i) / 2; j < (len + i) / 2; j++) 
        {
            
            printf("%c", name[j]);
        }

        printf("]\n");
    }


} // end of pyramid

void parsing(char name[])
{
    //Upper cases
    int i = 0;
    while (name[i]) 
    {
        name[i] = toupper(name[i]);
        i++;
    }

    printf("\n%s\n", name);

    //Lower cases
    i = 0;
    while (name[i]) 
    {
        name[i] = tolower(name[i]);
        i++;
    }

    printf("%s\n", name);

    //No spaces
    i = 0;
    while (name[i]) 
    {
        if(name[i] !=' ')
        {
         printf("%c", name[i]);
        } 
        i++;
    }   

    printf("\n");

    // Vowel upper case, consonantes lower case.
    i = 0;
    while (name[i]) 
    {
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            printf("%c",toupper(name[i]));
        } else
        {
            printf("%c",tolower(name[i]));
        }

        i++;
    }
    
    printf("\n");


    //Backwards
    i = 0;
    while (name[i]) 
    {
        printf("%c", name[strlen(name) - 1  - i]);
        
        i++;
    }  

    printf("\n");

    //ASCII value
   
    int len = strlen(name);

    for (int i = 0; i < len; i++) 
    {
        // I have considered, in order to make it more legilible, the blank space as blank space and every character as its ASCII Value
        if(name[i] == ' ')
        {
            printf(" ");
        }else
        {
            printf("%d", name[i]);
        }
    }

} //end of parsing



/*
int processPowerValues( int i)
{ 


} // end of processPowerValues
*/


int main(void)
{
    int i = 7;
    int j = 9;
    double x = 72.5;
    double y = -0.34;

    char name[] = "Marcos $ Antonio \% Martinez Gil ";

    printf("The absolute value of %d is: %d\n",i ,processAbsoluteValues(i));
    printf("The absolute value of %d is: %d\n",j ,processAbsoluteValues(j));
    printf("The absolute value of %.1f is: %.1f\n",x ,processAbsoluteValues_double(x));
    printf("The absolute value of %.2f is: %.2f\n",y ,processAbsoluteValues_double(y));  

    
    printf("\nThe 'round' value of %d is: %d\n",i ,processRoundValues(i));
    printf("The 'round' value of %d is: %d\n",j ,processRoundValues(j));
    printf("The 'round' value of %.1f is: %d\n",x ,processRoundValues(x));
    printf("The 'round' value of %.2f is: %d\n",y ,processRoundValues(y));
    

    printf("\nThe 'ceil' value of %d is: %d\n",i ,processCeilingValues(i));
    printf("The 'ceil' value of %d is: %d\n",j ,processCeilingValues(j));
    printf("The 'ceil' value of %.1f is: %d\n",x ,processCeilingValues(x));
    printf("The 'ceil' value of %.2f is: %d\n",y ,processCeilingValues(y));

    printf("\nThe 'floor' value of %d is: %d\n",i ,processFlooringValues(i));
    printf("The 'floor' value of %d is: %d\n",j ,processFlooringValues(j));
    printf("The 'floor' value of %.1f is: %d\n",x ,processFlooringValues(x));
    printf("The 'floor' value of %.2f is: %d\n",y ,processFlooringValues(y));

    printf("\nThe minimum value of %d, %d, %.1f, and %.2f is: %.2f\n",i, j, x, y ,processMinimunValues(i ,j, x, y));

    printf("\nThe maximum value of %d, %d, %.1f, and %.2f is: %.2f\n",i, j, x, y ,processMaximunValues(i ,j, x, y));

    // processTrigFunctionsValues (cos, sin, tan);
    printf("\ncos(%d) = %.2f\n",i ,processTrigFunctionsValues_cos(i));
    printf("sin(%d) = %.2f\n",i ,processTrigFunctionsValues_sin(i));
    printf("tan(%d) = %.2f\n",i ,processTrigFunctionsValues_tan(i));
    printf("cos(%d) = %.2f\n",j ,processTrigFunctionsValues_cos(j));
    printf("sin(%d) = %.2f\n",j ,processTrigFunctionsValues_sin(j));
    printf("tan(%d) = %.2f\n",j ,processTrigFunctionsValues_tan(j));
    printf("cos(%.1f) = %.2f\n",x ,processTrigFunctionsValues_cos(x));
    printf("sin(%.1f) = %.2f\n",x ,processTrigFunctionsValues_sin(x));
    printf("tan(%.1f) = %.2f\n",x ,processTrigFunctionsValues_tan(x));
    printf("cos(%.2f) = %.2f\n",y ,processTrigFunctionsValues_cos(y));
    printf("sin(%.2f) = %.2f\n",y ,processTrigFunctionsValues_sin(y));
    printf("tan(%.2f) = %.2f\n",y ,processTrigFunctionsValues_tan(y));
    
    printf("\ne^(%d) = %.2f\n",i ,processExponentialValues(i));
    printf("e^(%d) = %.2f\n",j ,processExponentialValues(j));
    printf("e^(%.1f) = %.2f\n",x ,processExponentialValues(x));
    printf("e^(%.2f) = %.2f\n",y ,processExponentialValues(y));

    printf("\nlog(%d) = %.2f\n",i ,processLogValues(i));
    printf("log(%d) = %.2f\n",j ,processLogValues(j));
    printf("log(%.1f) = %.2f\n",x ,processLogValues(x));
    printf("log(%.2f) = %.2f\n",y ,processLogValues(y));

    printf("\n%d^(%d) = %.2f\n",i, j ,processPowerValues(i ,j));
    printf("%.1f^(%.2f) = %.2f\n",x, y ,processPowerValues(x,y));


    printf("\nsqrt(%d) = %.2f\n",i ,processSquareRootsValues(i));
    printf("sqrt(%d) = %.2f\n",j ,processSquareRootsValues(j));
    printf("sqrt(%.1f) = %.2f\n",x ,processSquareRootsValues(x));
    printf("sqrt(%.2f) = %.2f\n",y ,processSquareRootsValues(y));   

    printf("\nA random value: %d\n", processRandomValues());

    printf("\n%s\n", name);

    printCharacterInfo(name);

    pyramid(name);

    parsing(name);



    return 0;
} //end of main(void)