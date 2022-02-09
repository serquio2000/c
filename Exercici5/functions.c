/*
 * functions.c
 *
 *  Created on: 19 ene. 2022
 *      Author: youngsxrgioo
 */
#include <stdio.h>

//variables
int insertNum1(){
	int a;
	do{
		printf("insert a number: \n");
		scanf("%d",&a);
	}while(a<0);
	return a;
}
int insertNum2(){
	int b;
	do {
			printf("insert a number: \n");
			scanf("%d",&b);
	}while(b<0);
	return b;
}
void auxNum(int a , int b)
{
	int aux;
	printf("values without changes:\n");
	printf("a = %d \n b = %d", a , b);
	a = aux;
	b = a;
	aux = a;
	printf("values with changes:\n");
	printf("a = %d \n b = %d", a , b);
	}
