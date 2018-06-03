#include <stdio.h>
#include <stdlib.h>

int g = 5; //intialized data segement
int g_u; //unintialized data segment


int main() {

	int x = 10;
	int y; //local variables => stack

	int *p = (int*)malloc(9);
	int *s = (int*)malloc(20);

	printf("g: %p \n g_u: %p \n x: %p \n y: %p \n *p: %p \n *s: %p \n", &g, &g_u, &x, &y, p, s);

	return 0;


}
