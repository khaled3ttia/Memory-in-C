#include <stdio.h>

int main() {
	int x = 5;
	int y = 9;	
	//int *p = &x;
	
	int *p;
	p = &x; 

	printf("The address referred to by the pointer is %p\n", p);
	p = &y;

	printf("The address referred to by the pointer is %p\n", p);
	*p = 10;

	printf("The value of x is : %d", x);
	printf("The value of y is : %d", y);

	printf("\nThe value referred to by the pointer is : %d\n", *p);
	printf("\nThe address reffered to by the pointer is : %p\n", p);

	return 0;

}
