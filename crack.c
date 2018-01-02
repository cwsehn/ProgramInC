#define _XOPEN_SOURCE
#define _GNU_SOURCE
#include <stdio.h>
//#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//#include <crypt.h>

/* sample test hashes from specs of this assignment....
...to be entered (beginning at "50") as command-line argument...
andi: 50.jPgLzVirkc
jason: 50YHuxoCN9Jkc
malan: 50QvlJWn2qJGE
mzlatkova: 50CPlMDLT06yY
patrick: 50WUNAFdX/yjA
rbowden: 50fkUxYHbnXGw
summer: 50C6B0oz0HWzo
stelios: 50nq4RV/NVU0I
wmartin: 50vtwu4ujL.Dk
zamyla: 50i2t3sOSAZtk

clang -ggdb3 -O0 -std=c11 -Wall -Werror -Wshadow crack.c -lm -o crack
*/

int main (int argc, char *argv[])
{
    
    /*  lots of "required" includes ...and a couple of #defines here....
    ....not sure what they're doing ....other than the crypt() function...
    ...is in there somewhere....and requires some other stuff...??...
    ...the manual describes how the first two chars of the hash == the salt...
    ...all hashes given for testing begin "50...."   */
    char salt[] = "50";
    int i, k = 0;
    char j = 'a';
    char test[5];
    char *decipher;

    
    /*  print error message and return 1 if command-line input is not 2 arguments in length...*/
    if (argc != 2)
    {
        printf ("Usage: ./crack hash\n");
        return 1;
    }

    /* pseudo-code  :  decipher == argv[1] ...is the ultimate solution here..hmm...
        ....but you need to compare arrays one index at a time....
        ....  salt == "50" has been verified by plugging in crypt("rofl", "50")..from the specs page for this problem...  
        ....and getting the hash value that was plugged into argv[1] returned 
        .... char[] test is the string that represents the password we are searching for...
        ....we are testing the given hash...which is argv[1]..
        ....against the output of crypt(test, salt)...represented by *decipher...??..char pointer..??
        ....and therefore the output we want to send to printf....
        ....we need to test various inputs of test[] into the crypt function...
        ....for test[i] ...i is less than 5..was specified.....test[i] == '\0' when all chars have been checked....
        .....test[i] is alphabetical.....therefore if we sort through every variation of 4 alphabetical chars...
        ....eventually decipher will == argv[1].......right??
        ....crypt(test, salt) returns NULL if ...???... */
        
        
        for (i = 0; i < 4; i++)
        {
            j = 'a';
            /* the following do/while loop goes through every variation of a-z/A-Z before incrementing i...*/ 
            do
            {
                /*  the test char[] is critical here...it is updated each time through the loop...
                    ...and then used as the first argument to the crypt function....
                    ...test char[5] was initialized above to provide a max of 4 char password ...
                    ...plus a 5th array element reserved for the '\0' char ...string ender...*/
                test[i] = j;
                decipher = crypt(test, salt);
                
                /* this internal while loop compares the string returned by crypt(test, salt) ...
                    ...with the hash entered at the command-line....the comparison is char by char...
                    ...beginning at each array's [0] index ...(represented by k) each time...
                    ...and progressing until the elements don't match...
                    ...a match is found when the ending null char '\0' is reached simultaneously by both arrays....
                    ...a match here signals the end of the program...the password has been cracked!  */
                if (decipher != NULL)
                {
                    while (decipher[k] == argv[1][k])
                    {
                        if (decipher[k] == '\0' && argv[1][k] == '\0')
                        {
                            printf ("%s\n", test);
                            return 0;
                        }
                        else
                        {
                            k++;
                        }
                    }
                }
                // k is reset to zero since the previous loop did not find an exact match....
                k = 0;
                
                /*  j is incremented way down at the bottom of the outer do/while loop....
                    ...when it reaches 'z' from it's initial 'a'....it jumps to 'A' - 1 ...
                    ...putting j at 'A' after it's incremented again....  this system could...
                    ...use some "clean-up" ...once everything works properly....    */
                if (j == 'z')
                {
                    j = 'A' - 1;
                }
                
                /*  if a match has not yet been found by the time the test array == 'Z'...
                    ...the test[0] is set back to 'a'... and the do/while loop is exited...
                    ....the next step is incrementing i ... and thus creating test array "aa".... */
                if (j == 'Z' && i == 0)
                {
                    test[i] = 'a';
                    break;
                }
                /*  this time through the do/while loop we reset j and increment test[i-1] ...
                    the first time through this represents the transition from ...
                    array "aZ" to array "ba" ...*/
                if (j == 'Z' && i > 0)
                {
                    j = 'a' - 1;
                    
                    test[i-1]++;
                    if (test[i-1] == 'z' + 1)
                    {
                        test[i-1] = 'A';
                    }
                    /*  the first time this point is reached...it represents the 
                        transition from "ZZ" to "aaa"...with array[1] being reset to 'a' ...
                        down below in the else block.....  */
                    if (test[i-1] == 'Z' + 1)
                    {
                        test[i-1] = 'a';
                        /* the second and third times this point is reached (i > 1) ...
                           ...therefore moving from array "aZZ" to "baa" and later...
                           ...from "aaZZ" to "abZZ" ...etc....*/
                        if (i > 1)
                        {
                           test[i-2]++;
                            if (test[i-2] == 'z' + 1)
                            {
                                test[i-2] = 'A';
                            }
                            if (test[i-2] == 'Z' + 1)
                            {
                                /*  we have reached "ZZZ"...the first time here, since i == 2 ...
                                    ....down to the else block.....thus "aaaa"  ...  
                                    ....the next time here we'll go from "aZZZ" to "bZZZ" and so it goes...*/
                                if (i > 2)
                                {
                                    test[i-2] = 'a';
                                    test[i-1] = 'a';
                                    test[i-3]++;
                                    if (test[i-3] == 'z' + 1)
                                    {
                                        test[i-3] = 'A';
                                    }
                                    /*  this is the end...my only friend...the end.... */
                                    if (test[i-3] == 'Z' + 1)
                                    {
                                        break;
                                    }
                                }
                                else if (i == 2)
                                {
                                    test[i-2] = 'a';
                                    test[i-1] = 'a';
                                    test[i] = 'a';
                                    break;
                                }
                            }
                            
                        }
                        else
                        {
                            test[i] = 'a';
                            break;
                        }
                    }
                }
                j++;
                
            }
            while ((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z'));
            
        }
        /*  this final printf is there in case we reach "the end" with no match....
            ...it helps verify we at least reach the end of the program 
            ... and return 0 ...  */
        printf ("whahappened?\n");
            
            return 0;
}