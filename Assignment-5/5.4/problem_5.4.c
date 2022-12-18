/*
CH-230-A
a5 p4.[c] 
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <stdio.h>
#include<math.h>
#include <stdlib.h>

void  divby5 (float arr[], int size){ // Iterate from 0 to assigned size.


	for (int i = 0; i < size; i++){ // For each number in array divide number by 5.
	
		 arr[i] /=  5;
	
	
	}
	
}

int main(){

	float *array;
	int size;
	
	printf("Enter number of elements for array:\n");
	scanf("%d", &size);

	array = (float*) malloc(sizeof(float) * size); // Allocate memory.

	printf("Enter numbers for array:\n");

	for (int i = 0; i < size; i++){
	
		scanf("%f", &array[i]);
	
	}


	printf("Before:\n");

	for (int i = 0; i <  size; i++){ // For each number in array print number.
	
		printf("%.3f ",array[i]);
	
	}
	printf("\n");



	divby5(array, size); // Call Function.

	printf("After:\n");

	for (int i = 0; i <= size; i++){ // For each number in array print element.

		
	
		printf("%.3f ",array[i]);
	
	
	}

	printf("\n");
	return 0;


}

