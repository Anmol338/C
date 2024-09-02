#include <stdio.h>
#include <conio.h>

struct numbers{
	int num1;
	int num2;
};

int main(){
	
	struct numbers n1;
	
	n1.num1 = 40;
	n1.num2 = 590;
	
	printf("The sum of %d + %d = %d\n", n1.num1, n1.num2, n1.num1 + n1.num2);
	
	struct numbers n2;
	n2.num1 = 117;
	n2.num2 = 233;
	
	printf("The sum of %d + %d = %d\n", n2.num1, n2.num2, n2.num1 + n2.num2);
	
	return 0;
}
