#include <stdio.h>
#include <stdlib.h>


int main(){
	int arr[5];
	int *arr1 = (int*)malloc(5*sizeof(int));
	if (arr1 == NULL){
		printf("error allocating space");
	}
	else {

		for (int i=0; i<5; i++){
			*(arr1 + i) = i * 2;
			printf(" %d \n", *(arr1 + i));

		}

	
		free(arr1);
	}

	printf("address of first element is %p\n", arr);
	int* ptr = &arr[0];
	printf("value of ptr is %p\n", ptr);

	printf("address of next element is %p\n", arr+1);
	

//	char* x;
//	printf("address of char is %p\naddress of char+1 %p\n", x, x+1);
/*
	for (int i=0;i<5;i++){
		arr[i] = i;
		printf(" %d\n ", arr[i]);
	}
*/
	
	for (int i=0; i<5;i++){
		*(arr + i) = i;
		//arr[i] = i;
		printf(" %d\n", *(arr + i));
	}	
	return 0;


}
