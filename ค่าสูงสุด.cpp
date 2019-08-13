#include <stdio.h>
main(){
	int a,b,c;
	while(1){
	printf("--------------\n");
	printf("Enter A : ");
	scanf("%d",&a);
	printf("Enter B : ");
	scanf("%d",&b);
	printf("Enter C : ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("Max is A\n");
		}
		if(a==c){
			printf("Max is A and C\n");
		}
	}
	if(b>a){
		if(b>c){
			printf("Max is B\n");
		}
		if(b==c){
			printf("Max is A and C\n");
		}
	}
	if(c>a){
		if(c>b){
			printf("Max is C\n");
		}
		if(c==b){
			printf("Max is A and C\n");
		}
	}


}
}

