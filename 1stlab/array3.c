/*Write a program to read 'n' numbers and search an element in an array*/
#include <stdio.h>
#define size 100
int main(){
	int array[size],i;
	int n,index,position,num;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the element in array: \n");
	for(i=0; i<n; i++){
		scanf("%d",&array[i]);
	}

	printf("The array elements are: \n");
	for(i=0;i<n;i++){
		printf("%d \t",array[i]);
	}
    
    
    printf("\nEnter the element you want to search: ");
    scanf("%d",&num);
    
	for(i=0;i<n;i++){
        if(array[i] == num){
            printf("Array is found at index %d\n",i);
        }
    }
	return 0;
}
 
