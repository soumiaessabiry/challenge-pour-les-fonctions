
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 int divededby(int n,int a){
 	int dev;
 	dev=n/a;
 	
return dev;	
}


bool ispremiere(int a){
int i;
 bool r;
 
 for(i=2;i<a;i++){
 	
 	if(a%i==0){
 		r=false;
 		break;
	 }else
	 r=true;
 	
 	return r;	
	
}
}

int main () {
	int a,b,c;
 printf("entrez un nombre : ");
 scanf("%d",&a);
 
 if(ispremiere(a)==true){
 
 	
 	printf("le nombre est premiere\n");
 }else	
		printf("le nombre est non  premiere\n");
		
		
		
		printf("entrez un nombre b : ");
		scanf("%d",&b);
printf("entrez un nombre compile c : ");
		scanf("%d",&c);

printf("la division est %d",divededby(b,c));


return 0;













		
}
