// bla bla bla
#include <stdio.h>
int main(){
	
	int age =13;
	//integer "age" is defined and set to 13
	printf("Age:%d", age);
	//"age" is printed
	age =14;
	//the value of "age" is set to 14
	printf("\nAfter birthday:%d", age );
	int age1 = age;
	//integer "age1" is set equal to "age"
	printf("\nAge 1 day after birthday:%d", age1);
	//"age1" is printed
	
	printf("\n");
	
	double number = 69.420;
	
	printf("\nfunni number %2.lf", number);
	
	printf("\nfunni number with more 0 %lf", number);
	
	printf("\n");
	
	float number1 =1.6e8;
	
	printf("\nbig boi number %f", number1);
	
	char funni = 'e';
	
	printf("\n%c", funni);
	printf("\n%d", funni);
	
	printf("\n");
	
	printf("\nEnter age zenci ");
	int age3;
	scanf("%d", &age3);
	printf("ur age = %d", age3);
	
return 0;
}