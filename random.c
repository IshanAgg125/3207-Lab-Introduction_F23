#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

char randchar() {
	char arr[] = {'a', 'b', 'c', 'd', 'e', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
	               'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	int randNum = (rand() % 26);

	return arr[randNum];	

}