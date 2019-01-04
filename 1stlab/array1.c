/*Program to read n numbers and delete a element from specified position*/

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
	printf("\n");

	printf("Enter the position of element you want to delete: ");
	scanf("%d",&position);

	for(int i=0;i<n;i++){			
		if((position-1) == i){		
			break;
		}
	}

	for(int i=position-1;i<n;i++){		
				array[i] = array[i+1];	
	}
	printf("The array elements are: \n");
	for(int i=0;i<n-1;i++){
		printf("%d \t",array[i]);
	}
	printf("\n");
	return 0;
}
