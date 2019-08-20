#include <stdio.h>
main(){
	
	int i,j,k,e,d;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("* ");	
		}
		printf("\n");
	for(k=0;k<3;k++){
		for(i=0;i<5;i=i+3){
			printf("* ");
			for(j=0;j<3;j++){
				printf("  ");
			}
		}
		printf("\n");
	}
	for(j=0;j<5;j++){
			printf("* ");	
		}
	}
}
