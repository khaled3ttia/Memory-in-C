#include <stdio.h>
#include <stdlib.h>


int main(){
	int *x = (int*)malloc(sizeof(int)); //allocate space for the size of an int
	if (x == NULL){		//check if malloc call was not successful
		printf("No avaialable space");
	}
	
	free(x);	//free allocated space when done

	return 0;
}
