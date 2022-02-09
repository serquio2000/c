/*
 * functions.c
 *
 *  Created on: 1 feb. 2022
 *      Author: youngsxrgioo
 */



#include <stdio.h>
#include "functions.h"

void validate(){
	do {
			printf("introduce cuanto valores deseas introducir:\n");
			scanf("%d", &ind);
		} while (ind > 50 || ind < 1);

		for (int i = 0; i < ind; i++) {
			int num;
			do {
				printf("introduce un valor:\n ");
				scanf("%d", &num);
				arr[i] = num;
			} while (num < 0 || num > 10);
		}
		printf("\nlos numeros introducidos son:\n");
		for (int i = 0; i < ind; i++) {
			printf("%d\n", arr[i]);

		}
}
void max(){
	int mx=arr[0];
	for (int i=0;i<ind;i++){
		if(arr[i]>mx){
			mx=arr[i];
		}

	}
	printf("\nel maximo valor es: %d",mx);
}
void min(){
	int min=arr[0];
	for (int i=0;i<ind;i++){
		if(arr[i]<min){
			min=arr[i];
		}

	}
	printf("\nel minimo valor es: %d",min);
}

void avg(){
	float avg=0;
	for (int i=0;i<ind;i++){
		avg= avg + arr[i];
	}

	printf("\nla mitjana es: %f\n",avg/ind );
}
void asc(){
	int aux;
	for (int i=0;i<ind;i++){
		for (int j=i+1;j<ind;j++)
			if(arr[i] > arr[j])
			{
				aux = arr[i];
				arr[i]=arr[j];
				arr[j]= aux;
			}

	}
	for (int i=0;i<ind;i++){
		printf("%d\n",arr[i]);
	}

}
