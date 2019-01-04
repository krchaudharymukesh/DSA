/*Write a program to read 'n' numbers and find smallest and largest number*/
#include <stdio.h>
#define size 100
int main(){
	int array[size];
	int n,index,position;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the element in array: \n");
	for(int i=0; i<n; i++){
		scanf("%d",&array[i]);
	}

	printf("The array elements are: \n");
	for(int i=0;i<n;i++){
		printf("%d \t",array[i]);
	}

    int largest;
	largest = array[0];
    int smallest;
	smallest = array[0];
    
	for(int i=1;i<n;i++){
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
