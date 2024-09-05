#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	// Declaring the integer type of pointers.
	int *ptr1, *ptr2;
	
	// Calculate the size of *ptr1 and allocate the memory size to tge malloc and it assign the size of memory dynamically.
	ptr1 = malloc(sizeof(*ptr1));
	ptr2 = malloc(sizeof(*ptr2));
	
	// Printing the memory address
	printf("The allocated address for ptr1 is %u\n", ptr1);
	printf("The allocated address for ptr2 is %u\n", ptr2);
	
	// Assigning the value in pointers variable
//	*ptr1 = 100;
//	*ptr2 = 200;
	
	// Printing the memory address and the corresponding value available at that memory address.
	printf("The value at memory address %u is %d\n", ptr1, *ptr1);
	printf("The value at memory address %u is %d\n", ptr2, *ptr2);
	
	// Taking input from user to assign the value in dinamically allocated memory location
	printf("Enter the new value for memory address %u : ", ptr1);
	scanf("%d", ptr1);
	printf("Enter the new value for memory address %u : ", ptr2);
	scanf("%d", ptr2);
	
	// Printing the newly assign value in dynamic memory address
	printf("The new value at memory address %u is %d\n", ptr1, *ptr1);
	printf("The new value at memory address %u is %d\n", ptr2, *ptr2);
	
	// Deallocating the dynamic memory address.
	free(ptr1);
	ptr1 = NULL;
	free(ptr2);
	ptr2 = NULL;
	
	printf("The allocated address for ptr1 is %u\n", ptr1);
	printf("The allocated address for ptr2 is %u\n", ptr2);
	
	return 0;
}
