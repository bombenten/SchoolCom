#include <stdio.h>
main(){
	int i,a,b,c;
	while(1){

	printf("Enter number : ");
	scanf("%d",&i);
	
	for(a=0;a<i;a++){
		for(b=i;b>a;b--){
			printf(" ");				
		}
		for(b=0;b<=a;b++){
			printf("*");				
		}
//		for(b=1;b<=a;b++){
//			printf("*");				
//		}
			printf("\n");		
	}
}
}
