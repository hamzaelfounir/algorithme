#include<stdio.h>

int num1, num2, a, b, result;

int main(){
	printf("Veuillez entrer deux nombres!\n Numero 1: ");
	scanf("%d",&num1);
	printf("Numero 2: ");
	scanf("%d",&num2);
	
	if (num1 > num2){
		a = num1;
		b = num2;
	} else{
		a = num2;
		b = num1;
	}
	
	while(b != 0){
		if (b % 2 == 1){
			b--;
			result += a;
			printf("= %d * %d + %d\n",a,b,result);
		} else {
			a *= 2;
			b /= 2;
			printf("= %d * %d + %d",a,b,result);
		}
	}
	printf("= %d",result);
	
	return 0;
}
