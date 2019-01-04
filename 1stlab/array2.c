/*Write a program to read 'n' numbers and find smallest and largest number*/
#include <stdio.h>
#define size 100
int main(){
	int array[size],i;
	int n,index,position;
    int smallest,largest;
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

	largest = array[0];
    
	smallest = array[0];
    
	for(i=1;i<n;i++){
        if(largest<=array[i]){
            largest = array[i];
        }
        if(smallest>=array[i]) {
            smallest = array[i];
        }
    }
	printf("\nSmallest number = %d\nLargest number = %d\n",smallest,largest);
	return 0;
}
