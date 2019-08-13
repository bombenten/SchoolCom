#include <stdio.h>
main(){
	float Time;
	while(1){
		printf("\n*********************************************");
	printf("\ngo to school");
	printf("\nWhat time out home : ");
	scanf("%f",&Time);
	
	
	if(Time<=06.00){
		printf("Go by my car to school");
	}
	else if(Time<=06.30){
		printf("Go by my car and pickup car");
	}
	else if(Time<=07.00){
		printf("Go by bus and my friend");
	}
	else if(Time<=07.30){
		printf("Go by bus and motorcycle");
	}
	else if(Time<=08.00){
		printf("Go by walk and motorcycle");
	}
	else{
		printf("Stay home");
	}
}
}
