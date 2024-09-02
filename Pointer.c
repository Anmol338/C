#include <stdio.h>
#include <conio.h>

int main(){
	
	int num = 100;
	int num2 = 100;
	int *ptr = &num;
	int *ptr2 = &num2;
	
	printf("The value %d is located at memory location %d.\n",num, ptr);
	printf("The value located at memory location %d is %d.\n\n",ptr, *ptr);
	
	printf("The value %d is located at memory location %d.\n",*ptr2, ptr2);
	printf("The value located at memory location %d is %d.\n\n",ptr2, *ptr2);
	
	return 0;
}
