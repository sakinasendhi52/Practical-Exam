//Q2. Create a C program to find the largest element in an 1D array.

//Header file
#include<stdio.h>

//main function
int main(){
    //Declaration of variable
    int size, largest;

    //Heading
    printf("----------------------------------\n");
    printf("|  LARGEST ELEMENT FROM 1D ARRAY |\n");
    printf("----------------------------------\n\n");

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

    //Initializing largest with the first value of array
    largest=arr[0];

    //Code for finding the largest element
    for(int i=0; i<size; i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }

    //Printing the largest element from the array
    printf("\nLargest value from [ ");
    for(int i=0; i<size; i++){
        printf("%d",arr[i]);
        if(i!=size-1){
            printf(", ");
        }
    }
    printf("] is %d.",largest);

    return 0;
}