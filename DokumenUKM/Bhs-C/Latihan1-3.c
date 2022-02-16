#include<stdio.h>

void main () {
	char  thisChar    = 'a' ; //char type data
	int   thisInteger = 19;   //integer type data
	float thisFloat   = "5.0" ;  //float type data
	int angka [2];
	angka [0] = 1 ;
	angka [1] = 2 ;
	angka [2] = 3 ;
	int numberr[3] = {1,2,3};
	numberr[1] = 10;
	char name[] = "Juggernaut" ;
	printf("this is char type data    : %c \n " , thisChar);
	printf("this is integer type data : %i \n " , thisInteger);
	printf("this is array type data   : %i \n " , angka[0]);
	printf("this is name array type data   : %s \n " , name);
	printf("this is float type data   : %f \n " , thisFloat);
}