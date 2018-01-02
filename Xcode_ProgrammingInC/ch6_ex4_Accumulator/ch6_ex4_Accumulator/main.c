//
//  main.c
//  ch6_ex4_Accumulator
//
//  Created by Chris William Sehnert on 7/18/17.
//  Copyright © 2017 InSehnDesigns. All rights reserved.
//

/*		********
 exercise 4 / chapter 6 / Programming in C
 ***			*/

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    float Accumulator, newResult = 0;
    char Operator;
    bool End = false;
    
    printf ("\nEnter your commands in the form NUMBER followed by OPERATOR.\n");
    printf ("This program will perform the following operations...\n");
    printf ("\n+ for addition\n- for subtraction\n* for multiplication\n/ for division\n");
    printf ("\nType S as operator to Set or re-Set the accumulator.\n");
    printf ("\nType E as operator to End program.\n");
    
    printf("\nAccumulator = 0...\nEnter a number and type S to start accumulating.....\n");
    
    while (End == false)
    {
        scanf ("%f", &Accumulator);
        scanf (" %c", &Operator);
        
        
        switch (Operator)
        {
            case 'S':
                newResult = Accumulator;
                printf ("\tSet Accumulator to %.4g\n", Accumulator);
                printf ("= %f\tContents of Accumulator\n", Accumulator);
                break;
            case '+':
                newResult += Accumulator;
                printf ("\tAdd %.4g\n", Accumulator);
                printf ("= %f\tContents of Accumulator\n", newResult);
                break;
            case '-':
                newResult -= Accumulator;
                printf ("\tSubtract %.4g\n", Accumulator);
                printf ("= %f\tContents of Accumulator\n", newResult);
                break;
            case '*':
                newResult *= Accumulator;
                printf ("\tMultiply by %.4g\n", Accumulator);
                printf ("= %f\tContents of Accumulator\n", newResult);
                break;
            case '/':
                if (Accumulator == 0)
                    printf ("UNDEFINED\n");
                
                else
                    newResult /= Accumulator;
                printf ("\tDivide by %.4g\n", Accumulator);
                printf ("= %f\tContents of Accumulator\n", newResult);
                break;
                
            case 'E':
                printf ("\tEnd of program\n");
                printf ("= %f\nEnd of Calculations.\n", newResult);
                End = true;
                break;
                
            default:
                printf ("Cannot calculate....double check input and try again...\n");
                printf ("= %f\tContents of Accumulator\n", newResult);
                break;			
        }
    }
    return 0;
}	
