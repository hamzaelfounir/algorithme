#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{int a, b, c;
float delta, s1, s2, s3;

printf("entrer a ");
scanf("%d",&a);
printf("entrer b");
scanf("%d",&b);
printf("entrer c");
scanf("%d",&c);
delta = pow(b,2)-4*a*c;
if (a==0 && b==0 && c==0)
{
	printf("tous chiffre est solution");
	}
	else if (a==0 && b==0)
	{printf("aucun solution");
	}
	else if (a==0)
	{printf("solution 1er degree x= %f", (double)c/b);
	}
	else if (delta>0)
	{s1=(-b+sqrt(delta))/2*a;
	s2=(-b-sqrt(delta))/2*a;
	printf("solution 1:%f solution2:%f",s1,s2);
	}
	else if (delta==0)
	{s1=-b/2*a;
	printf("seule solution %f",s1);
	}
	else
	{printf("aucune solution");
	}
	
	
}

