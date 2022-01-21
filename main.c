#include <stdio.h>
#include "functions.h"


void main() {

	int valueF,valueS;
	valueF = insertNum(INPUT); // call function for insert num1
	valueS = insertNum(INPUT); // call function for insert num2
	auxNum(WOCHANGES,RESULTS,&valueF, &valueS,WCHANGES);// call function for change values
	printf(RESULTS, valueF , valueS); //show result
}
