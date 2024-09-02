#include <stdio.h>
#include <conio.h>

int sum(int num1, int num2){
	int sum = num1 + num2;
	return sum;
}

int diff(int num1, int num2){
	int diff = num1 - num2;
	return diff;
}

int pro(int num1, int num2){
	int pro = num1 * num2;
	return pro;
}

int div(int num1, int num2){
	int div = num1 / num2;
	return div;
}

int main(){
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	char operator;
	printf("Enter the operator (+, -, *, /) : ");
	scanf("%c",&operator);
	printf("Enter the first number : ");
	scanf("%d", &num1);
	printf("Enter the second number : ");
	scanf("%d", &num2);
	switch (operator){
		case '+':
			result = sum(num1, num2);
			printf("\nThe result of %d + %d = %d", num1, num2, result);
			break;
		
		case '-':
			result = diff(num1, num2);
			printf("\nThe result of %d - %d = %d", num1, num2, result);
			break;
		
		case '*':
			result = pro(num1, num2);
			printf("\nThe result of %d * %d = %d", num1, num2, result);
		
		case '/':
			result = div(num1, num2);
			printf("\nThe result of %d / %d = %d", num1, num2, result);
			break;
			
		default:
			printf("\nPlease once input the valid opertaor only!!");
	}
	printf("The sum of %d + %d = %d", num1, num2, result);
	return 0;
}
