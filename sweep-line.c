#include <stdio.h>
#include <stdlib.h>

//sweep-line algorithm to find the max 


int main (){

    //declare and initialize array of size 5 
    int arr[5];

    // iterate over the size of the array to let the user choose the elements of the array and safe them at the adress of i
    for (int i = 0; i < 5; i++){
        printf("\nEnter a value: ");
        scanf("%d", &arr[i]);
    }

    //iterate over the array to find the max value in the array
    int max = arr[0];
    for (int i = 0; i < 5; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    //print the max value
    printf("\nThe max value is: %d\n", max);

    return 0;
}