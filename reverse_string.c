//Q3. Write a C program that defines a function to reverse a string without using any library functions.

//Header file
#include<stdio.h>

//UDF function for reversing
void reverseString(char str[]){
    int length=0,j=0;

    //Using loop for finding length
    for(int i=0; str[i]!='\0'; i++){
        length++;
    }
    length--;

    //Using for loop for reversing a string
    printf("\nREVERSED STRING :");
    for(int i=length; i>=0; i--){
        printf("%c",str[i]);
    }
}

//main function
int main(){
    //Declaration of a string
    char str[100];

    //Heading
    printf("----------------------------------\n");
    printf("|          REVERSE STRING         |\n");
    printf("----------------------------------\n\n");

    //Input a string
    printf("Enter a string : ");
    fgets(str,sizeof(str),stdin);

    //Calling UDF
    reverseString(str);

    return 0;
}