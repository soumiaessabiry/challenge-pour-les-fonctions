#include<stdio.h>
#include<stdlib.h>
    int addition(int a, int b){
	
		return a+b;
		
	} 

int main(){
	
	
	int A,B;
	printf("entrez le premiere nombre : ");
	scanf("%d",&A);
	printf("entrez le deusxieme nombre : ");
	scanf("%d",&B);
	
	
	printf("laddition est  %d",addition(A,B));
	return 0;
	
}
