#include <stdio.h>
main(){
		int a,b,c,d,e;
	while(1){
	printf("\n------------------------\n");
	printf("Enter Number [1] : ");
	scanf("%d",&a);
	printf("Enter Number [2] : ");
	scanf("%d",&b);
	printf("Enter Number [3] : ");
	scanf("%d",&c);
	printf("Enter Number [4] : ");
	scanf("%d",&d);
	printf("Enter Number [5] : ");
	scanf("%d",&e);
	printf("------------------------\n");
	
	if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					printf("Max Number = %d",a);
				}
			}
		}
	}
	if(b>a){
		if(b>c){
			if(b>d){
				if(b>e){
					printf("Max Number = %d",b);
				}
			}
		}
	}
	if(c>b){
		if(c>a){
			if(c>d){
				if(c>e){
					printf("Max Number = %d",c);
				}
			}
		}
	}
	if(d>b){
		if(d>c){
			if(d>a){
				if(d>e){
					printf("Max Number = %d",d);
				}
			}
		}
	}
	if(e>b){
		if(e>c){
			if(e>d){
				if(e>a){
					printf("Max Number = %d",e);
				}
			}
		}
	}
	
	}
}
