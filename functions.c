#include <stdio.h>
#include "functions.h"

int insertNum(){
	int num;
	do{
		printf("insert a number:\n");
		scanf("%d", &num);
	}while(num<0);
	return num;
}
void lader(int num){
	int n=0;
	for(int i=0; i<num;i++){
		n= n + i;
		if (n<=num ){

			printf("%d ",i);
		}
	}


}
