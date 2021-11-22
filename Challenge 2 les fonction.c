#include<stdio.h>
#include<stdlib.h>

void echanger(int a,int b){
int c;
	c=a;
	a=b;
	b=c;
	printf("b=%d a=%d",b,a);
}
int main(){
	
	int A,B;
	printf("entrez le premiere nombre A : ");
	scanf("%d",&A);
	printf("entrez le deusxieme nombre  B: ");
	scanf("%d",&B);
	
	echanger(A,B);
	
	
	
	
	
	
	return 0;
	
	
	
	
}
