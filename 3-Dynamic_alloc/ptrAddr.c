#include <stdio.h>

int main(){

	int x=5;
	int *ptr = &x; 
	double y = 7.0568;
	double *ptr1 = &y;

	printf("size of x: %lu\nsize of y:%lu\nsize of *ptr is %lu\nsize of *ptr1 is %lu\n", sizeof(int),sizeof(double),sizeof(int*),sizeof(double*));
	

	int *pt2 = NULL;
	//printf("address referred by this pointer %p\n", pt2);
	*pt2 = 5;
	return 0;


}
