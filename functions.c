#include <stdio.h>
#include "functions.h"
//variables
int insertNum(char *msg){
	int a;
	do{
		printf("%s",msg); // insert a number
		scanf("%d",&a);
	}while(a<0); // condition for validate number
	return a; // return number
}

void auxNum(char *msg,char *result,int *a , int *b, char *msg2)
{
	int aux=0; // variable aux for save value
	printf("%s", msg);
	printf(result, *a , *b);//message print results withoutchanges
	aux = *a; // assign result to aux
	*a = *b; // assign result to a
	*b = aux ; // assign result to b
	printf("%s",msg2);

	}
