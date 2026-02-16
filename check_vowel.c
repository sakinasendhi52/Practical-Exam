//Q1. Create a C program to check if a character entered by the user is a vowel or consonant using a switch statement.

//Header file
#include<stdio.h>

//main function
int main(){
    //Declaration of a char type variable
    char letter;

    //Heading
    printf("-------------------\n");
    printf("|  VOWEL CHECKER  |\n");
    printf("-------------------\n\n");

    //Input the character
    printf("Enter a Character : ");
    scanf("%c",&letter);
    printf("\n");

    //Switch case to check whether letter is vowel or consonant
    switch(letter){
        //Cases for lower case vowels
        case 'a': 
        printf("%c is a Vowel",letter);
        break;

        case 'e': 
        printf("%c is a Vowel",letter);
        break;

        case 'i': 
        printf("%c is a Vowel",letter);
        break;

        case 'o': 
        printf("%c is a Vowel",letter);
        break;

        case 'u': 
        printf("%c is a Vowel",letter);
        break;

        //Cases for upper case vowels
        case 'A': 
        printf("%c is a Vowel",letter);
        break;

        case 'E': 
        printf("%c is a Vowel",letter);
        break;

        case 'I': 
        printf("%c is a Vowel",letter);
        break;

        case 'O': 
        printf("%c is a Vowel",letter);
        break;

        case 'U': 
        printf("%c is a Vowel",letter);
        break;

        //If the letter is not vowel then the Default case will be executed for consonant
        default:
        printf("%c is a Consonant.",letter);
        break;
    }

    return 0;
}