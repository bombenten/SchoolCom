#include <stdio.h>
main(){
	
	int i,j,p;
	while(1){
	
	printf("\nEnter your number :");
	scanf("%d",&p);
	printf("= ");
	
	
	i = (p/100)*100;
	if(p>0){
	if(i>=100){
		if(i==100){
			printf("One hundred ");
		}
		if(i==200){
			printf("Two hundred ");
		}
		if(i==300){
			printf("Three hundred ");
		}
		if(i==400){
			printf("Four hundred ");
		}
		if(i==500){
			printf("Five hundred ");
		}
		if(i==600){
			printf("Six hundred ");
		}	
		if(i==700){
			printf("Seven hundred ");
		}
		if(i==800){
			printf("Eight hundred ");
		}
		if(i==900){
			printf("Nine hundred ");
		}
	}
		j = (p - i);
		
		if(j==11){
			printf("eleven ");
		}
		else{
			if(j==12){
				printf("twelve ");
			}
			else{
				if(j==13){
					printf("thirteen ");
				}
				else{
					if(j==14){
						printf("fourteen ");
					}
					else{
						if(j==15){
							printf("fifteen ");
						}
						else{
							if(j==16){
								printf("sixteen ");
							}
							else{
								if(j==17){
									printf("seventeen ");
								}
								else{
									if(j==18){
										printf("eighteen ");
									}
									else{
										if(j==19){
											printf("nineteen");
										}
										else{
											j = ((p - i)/10)*10 ;
			
											if(j==10){
												printf("ten ");
											}
											if(j==20){
												printf("twenty ");
											}
											if(j==30){
												printf("thirty ");
											} 
											if(j==40){
												printf("Fourty ");
											}
											if(j==50){
												printf("fifty ");
											}
											if(j==60){
												printf("Sixty ");
											}	
											if(j==70){
												printf("seventy ");
											}
											if(j==80){
												printf("eighty ");
											}
											if(j==90){
												printf("ninety ");
											}
										}
									}	
								}
	i = (p - (i + j));
	
	if(i>=0){
		if(i==1){
			printf("one");
		}
		if(i==2){
			printf("two");
		}
		if(i==3){
			printf("three");
		}
		if(i==4){
			printf("four");
		}
		if(i==5){
			printf("five");
		}
		if(i==6){
			printf("six");
		}	
		if(i==7){
			printf("seven");
		}
		if(i==8){
			printf("eight");
		}
		if(i==9){
			printf("nine");
		}
	}	
}		
}
}
}
}
}
}
else{
	printf("zero");
}
}
}
