#include <stdio.h>
/*
Data types in c
1)integer (int): 1, 10 ,100 ,1000 ,-100 ,10+12.23=22(An int variable contains only whole numbers)
2)float :1.00, 1.0890890 ,1.02+2.22=3.25 (Float data type allows a variable to store decimal values)
3)character (char) :A-Z,a-z,symbols[#%$@*]
*/

int main(){
	
	int wn = 20;//wn means whole number.
	float dn = 12.23;//dn means decimal number.
	char c = 'd';// c means character.
	
	printf("%d\n",wn);
	printf("%.2f\n",dn);//.2f is for to show .00 in floatline.
	printf("%c\n",c);
	//(\n is for to show the another code in down or in new line.)
		
	return 0;
}
/*
(printf("%d\n",a); to show the int and %d is for int)
(printf("%.2f\n",b); to show the float and %f is for float and )
(printf("%c\n",c); to show the character d)

*/
