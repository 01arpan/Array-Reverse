#include<stdio.h>
void reverse(int arr[],int n);
void printArr(int arr[],int n);

int main(){
//User defined Array
    int i=0,n;
    printf("Numbers:");
    scanf("%d",&n);
    int arr[n];
    
    while (n>i)
    {   printf("%d th value:",i);
        scanf("%d",&arr[i]);
        i++;
    }

    
    

//Printing Users Array
    printf("Insert Array : ");
    printArr(arr,n);

//Printing Reverse Array of Users Array    
    reverse(arr,n);
    printf("Reverse Array: ");
    printArr(arr,n);
    
    
    return 0;
}

//Reverse Function Definition

void reverse(int arr[],int n){
    for(int i = 0;i< n/2;i++){
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
}

//Printing Function Definition

void printArr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    

}