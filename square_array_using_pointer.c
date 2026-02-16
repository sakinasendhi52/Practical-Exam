//Q4. Write a C program to find square of each elements of an 1D array using Pointer.

//Header file
#include<stdio.h>

//main function
int main(){
    //Declaration of size variable
    int size;

    //Heading
    printf("-------------------------------------------\n");
    printf("|  SQUARE OF ARRAY ELEMENT USING POINTER  |\n");
    printf("-------------------------------------------\n\n");

    //Input the size of array
    printf("Enter the size of array : ");
    scanf("%d",&size);

    //Array declaration
    int arr[size];

    //Input the elements in array
    printf("\nEnter the elements in array :\n");
    for(int i=0; i<size; i++){
        printf("a[%d] = ",i);
        scanf("%d",&arr[i]);
    }

    //Declaration and Initialization of pointer
    int *ptr=arr;    //Pointer ptr points at the first element of array

    int sqrArr[size];  //Declaring sqrArr[] for storing the square elements

    //Using loop to store square elements
    for(int i=0; i<size; i++){
        //Using pointer for finding square of array elements
        sqrArr[i]= (*(ptr + i)) * (*(ptr + i));
    }

    //Printing the square of array elements
    printf("\nThe square of [");
    //Loop to print array arr[]
    for(int i=0; i<size; i++){
        printf("%d",arr[i]);
        if(i!=size-1){
            printf(", ");
        }
    }
    printf("] is [");
    //Loop to print array sqrArr[]
    for(int i=0; i<size; i++){
        printf("%d",sqrArr[i]);
        if(i!=size-1){
            printf(", ");
        }
    }
    printf("].");

    return 0;
}