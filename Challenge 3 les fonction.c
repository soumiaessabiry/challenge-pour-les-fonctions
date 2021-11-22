#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
 bool ispremiere(int a){
 int i;
 bool r;
 
 for(i=2;i<=a;i++){
 	
 	if(a%i==0){
 		r=false;
 		break;
	 }else
	 r=true;
 	
 	return r;
 }
}

int main(){
	
int a;
 printf("entrez un nombre : ");
 scanf("%d",&a);
 
 if(ispremiere(a)==true)
 	
 	printf("le nombre est premiere");
 else	
	
		printf("le nombre est non  premiere");
	return 0 ;	
}
